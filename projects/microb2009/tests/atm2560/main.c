/*  
 *  Copyright Droids Corporation
 *  Olivier Matz <zer0@droids-corp.org>
 * 
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Revision : $Id: main.c,v 1.2 2009-02-20 21:10:01 zer0 Exp $
 *
 */

#include <stdio.h>
#include <string.h>

#include <aversive.h>
#include <aversive/pgmspace.h>
#include <aversive/wait.h>

#include <parse.h>
#include <rdline.h>
#include <ax12.h>
#include <uart.h>
#include <pwm_ng.h>
#include <timer.h>
#include <scheduler.h>
#include <pid.h>
#include <time.h>
#include <quadramp.h>
#include <control_system_manager.h>

#include "main.h"

/* ---- with 16 Mhz quartz
 * CKSEL 3-0 : 0110
 * SUT 1-0 : 00 
 * CKDIV8 : 1
 * ---- bootloader
 * BOOTZ 1-0 : 01 (4K bootloader)
 * BOOTRST : 0 (reset on bootloader)
 */

/* for cmdline interface */
struct rdline rdl;
char prompt[RDLINE_PROMPT_SIZE];
extern parse_pgm_ctx_t main_ctx[];

AX12 ax12;
struct arm arm;


/******** For cmdline. See in commands.c for the list of commands. */
static void write_char(char c) 
{
	uart_send(3, c);
}

static void 
valid_buffer(const char * buf, uint8_t size) 
{
	int8_t ret;
	ret = parse(main_ctx, buf);
	if (ret == PARSE_AMBIGUOUS)
		printf_P(PSTR("Ambiguous command\r\n"));
	else if (ret == PARSE_NOMATCH)
		printf_P(PSTR("Command not found\r\n"));
	else if (ret == PARSE_BAD_ARGS)
		printf_P(PSTR("Bad arguments\r\n"));
}

static int8_t 
complete_buffer(const char * buf, char * dstbuf, uint8_t dstsize,
		int16_t * state)
{
	return complete(main_ctx, buf, state, dstbuf, dstsize);
}


/***********************/

void do_led_blink(void * dummy)
{
#if 1 /* simple blink */
	static uint8_t a=0;

	if(a)
		LED1_ON();
	else
		LED1_OFF();
	
	a = !a;
#endif
}

/* called every 5 ms */
static void do_cs(void * dummy) 
{
	if (arm.flags & CS_ON)
		cs_manage(&arm.cs_mot);
}

static void main_timer_interrupt(void)
{
	static uint8_t cpt = 0;

	cpt++;
	sei();

	if ((cpt & 0x3) == 0)
		scheduler_interrupt();
}

/* sending "pop" on uart0 resets the robot */
static void emergency(char c)
{
	static uint8_t i = 0;
	
	if ((i == 0 && c == 'p') ||
	    (i == 1 && c == 'o') ||
	    (i == 2 && c == 'p')) 
		i++;
	else if ( !(i == 1 && c == 'p') )
		i = 0;
	if (i == 3)
		reset();
}

int main(void)
{
	int c;
	const char *history, *buffer;
	int8_t ret, same = 0;
	
	/* brake */
	DDRJ = 0xF0;
	PORTJ = 0;

	/* CPLD on XXX */

	/* LEDS */
	DDRJ |= 0x0c;
	DDRL = 0xc0;
	LED1_OFF();
	memset(&arm, 0, sizeof(struct arm));

	/* PID */
	pid_init(&arm.pid_mot);
	pid_set_gains(&arm.pid_mot, 20, 0, 0);
	pid_set_maximums(&arm.pid_mot, 0, 30000, 4095);
	pid_set_out_shift(&arm.pid_mot, 6);
	pid_set_derivate_filter(&arm.pid_mot, 6);

	/* QUADRAMP */
	quadramp_init(&arm.qr_mot);
	quadramp_set_1st_order_vars(&arm.qr_mot, 800, 800); /* set speed */
	quadramp_set_2nd_order_vars(&arm.qr_mot, 20, 20); /* set accel */

	/* CS */
/* 	cs_init(&arm.cs_mot); */
/* 	cs_set_consign_filter(&arm.cs_mot, quadramp_do_filter, &arm.qr_mot); */
/* 	cs_set_correct_filter(&arm.cs_mot, pid_do_filter, &arm.pid_mot); */
/* 	cs_set_process_in(&arm.cs_mot, pwm_ng_set, ARM_MOT_PWM); */
/* 	cs_set_process_out(&arm.cs_mot, encoders_microb_get_value, ARM_ENC); */
/* 	cs_set_consign(&arm.cs_mot, 0); */

#if 0
	/* SPI */
	spi_init(SPI_MODE_MASTER, SPI_FORMAT_2, SPI_CLK_RATE_16);
	spi_set_data_order(SPI_MSB_FIRST);
	spi_register_ss_line(&SS_PORT, SS_BIT);
#endif


	uart_init();
 	fdevopen(uart3_dev_send, uart3_dev_recv);
	uart_register_rx_event(3, emergency);

	/* TIMER */
	timer_init();
	timer0_register_OV_intr(main_timer_interrupt);

	/* SCHEDULER */
	scheduler_init();
	scheduler_add_periodical_event_priority(do_led_blink, NULL, 
						100000L / SCHEDULER_UNIT, 
						LED_PRIO);

	/* PWM */
	PWM_NG_TIMER_8BITS_INIT_B(2, TIMER_8_MODE_PWM, 
				  TIMER2_PRESCALER_DIV_1);
	PWM_NG_TIMER_16BITS_INIT(1, TIMER_16_MODE_PWM_10, 
				 TIMER1_PRESCALER_DIV_1);
	
	PWM_NG_INIT8_B(&arm.pwm1_2A, 2, A, 8, PWM_NG_MODE_SIGNED,
		     &PORTD, 4);
	PWM_NG_INIT16(&arm.pwm2_1A, 1, A, 10, PWM_NG_MODE_SIGNED,
		      &PORTD, 5);
	PWM_NG_INIT16(&arm.pwm3_1B, 1, B, 10, PWM_NG_MODE_SIGNED,
		      &PORTD, 6);
	PWM_NG_INIT16(&arm.pwm4_1C, 1, C, 10, PWM_NG_MODE_SIGNED,
		      &PORTD, 7);


	/* servos */
	PWM_NG_TIMER_16BITS_INIT(3, TIMER_16_MODE_PWM_10, 
				 TIMER1_PRESCALER_DIV_256);
	/* 1 et 2 ko XXX */
	PWM_NG_INIT16(&arm.servo1, 3, A, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	PWM_NG_INIT16(&arm.servo2, 3, B, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	PWM_NG_INIT16(&arm.servo3, 3, C, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	PWM_NG_TIMER_16BITS_INIT(5, TIMER_16_MODE_PWM_10, 
				 TIMER1_PRESCALER_DIV_256);
	PWM_NG_INIT16(&arm.servo4, 5, A, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	PWM_NG_INIT16(&arm.servo5, 5, B, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	PWM_NG_INIT16(&arm.servo6, 5, C, 10, PWM_NG_MODE_NORMAL,
		      NULL, 0);
	

	/* CS EVENT */
	scheduler_add_periodical_event_priority(do_cs, NULL, 
						5000L / SCHEDULER_UNIT, 
						CS_PRIO);
	/* TIME */
	time_init(TIME_PRIO);

	printf_P(PSTR("Coucou\r\n"));
	sei();

	rdline_init(&rdl, write_char, valid_buffer, complete_buffer);
	snprintf(prompt, sizeof(prompt), "atm2560 > ");	
	rdline_newline(&rdl, prompt);


	while (1) {
		c = uart_recv_nowait(3);
		if (c == -1) 
			continue;
		ret = rdline_char_in(&rdl, c);
		if (ret != 2 && ret != 0) {
			buffer = rdline_get_buffer(&rdl);
			history = rdline_get_history_item(&rdl, 0);
			if (history) {
				same = !memcmp(buffer, history, strlen(history)) &&
					buffer[strlen(history)] == '\n';
			}
			else
				same = 0;
			if (strlen(buffer) > 1 && !same)
				rdline_add_history(&rdl, buffer);
			rdline_newline(&rdl, prompt);
		}
	}

	return 0;
}

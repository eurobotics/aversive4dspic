/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2005)
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
 *  Revision : $Id: uart.c,v 1.33.4.7 2009/01/23 23:08:42 zer0 Exp $
 *
 */

/* Olivier MATZ, Droids-corp 2004 - 2009 */

#include <aversive.h>
#include <aversive/list.h>

#include <uart.h>
#include <uart_defs.h>
#include <uart_private.h>

struct cirbuf g_tx_fifo[UART_HW_NUM];
struct cirbuf g_rx_fifo[UART_HW_NUM];

///* global vars are initialized to 0 (NULL) */
event *rx_event[UART_HW_NUM];
event *tx_event[UART_HW_NUM];

/*
const struct regs uart_regs[UART_HW_NUM] = {
#ifdef UDR0
        {
                .udr = &UDR0,
                .ucsra = &UCSR0A,
                .ucsrb = &UCSR0B,
                .ucsrc = &UCSR0C,
                .ubrrl = &UBRR0L,
                .ubrrh = &UBRR0H,
        },
#endif
#ifdef UDR1
        {
                .udr = &UDR1,
                .ucsra = &UCSR1A,
                .ucsrb = &UCSR1B,
                .ucsrc = &UCSR1C,
                .ubrrl = &UBRR1L,
                .ubrrh = &UBRR1H,
        },
#endif
#ifdef UDR2
        {
                .udr = &UDR2,
                .ucsra = &UCSR2A,
                .ucsrb = &UCSR2B,
                .ucsrc = &UCSR2C,
                .ubrrl = &UBRR2L,
                .ubrrh = &UBRR2H,
        },
#endif
#ifdef UDR3
        {
                .udr = &UDR3,
                .ucsra = &UCSR3A,
                .ucsrb = &UCSR3B,
                .ucsrc = &UCSR3C,
                .ubrrl = &UBRR3L,
                .ubrrh = &UBRR3H,
        },
#endif
};
*/

const struct regs uart_regs[UART_HW_NUM] = {
#ifdef _U1TXIE
        {
                .umode        = &U1MODE,
                .usta         = &U1STA,
                .utxreg       = &U1TXREG,
                .urxreg       = &U1RXREG,
                .ubrg         = &U1BRG,
        },
#endif
#ifdef _U2TXIE
        {
                .umode        = &U2MODE,
                .usta         = &U2STA,
                .utxreg       = &U2TXREG,
                .urxreg       = &U2RXREG,
                .ubrg         = &U2BRG,
        },
#endif
};

/**
 * This is the interruption function which occurs when the entire
 * frame in the transmit shift register has been shifted out and 
 * there is no new data in the transmit buffer.
 */
 
#ifdef UART0_COMPILE
void __attribute__((interrupt, no_auto_psv)) _U1TXInterrupt(void) 
{
	uart_send_next_char(0);
	IFS0bits.U1TXIF = 0;
}
#endif

#ifdef UART1_COMPILE
void __attribute__((interrupt, no_auto_psv)) _U2TXInterrupt(void) 
{
	uart_send_next_char(1);
	IFS1bits.U2TXIF = 0;
}
#endif


static void uart_recv_next_char(uint8_t num);

/**
 * This is the interruption function which occurs when there is
 * a new unread data in the reception buffer.
 */
#ifdef UART0_COMPILE
void __attribute__((interrupt, no_auto_psv)) _U1RXInterrupt(void)
{
	uart_recv_next_char(0);
	IFS0bits.U1RXIF = 0;
}
#endif
#ifdef UART1_COMPILE
void __attribute__((interrupt, no_auto_psv)) _U2RXInterrupt(void)
{
	uart_recv_next_char(1);
	IFS1bits.U2RXIF = 0;
}
#endif


/** 
 * transmit next character of fifo if any, and call the event function.
 * This function is executed with intr locked.
 */
void uart_send_next_char(uint8_t num)
{
#ifdef CONFIG_MODULE_UART_9BITS
#error MODULE_UART_9BITS has not been ported to DSPIC yet
	if (uart_getconf_nbits(num) == 9) {
		int elt = 0;

		/* for 9 bits, it uses 2 places in the fifo */
		if (CIRBUF_GET_LEN(&g_tx_fifo[num]) < 2) {
   		// disable tx interrupt
//         cbi(*uart_regs[num].ucsrb, UDRIE);
         uart_tx_ie(num,0);
			return;
		}

		cirbuf_get_buf_tail(&g_tx_fifo[num], (char *)&elt, 2);
		cirbuf_del_buf_tail(&g_tx_fifo[num], 2);

      // write on uart 9 bits mode
//      uart_set_udr_9bits(num, elt);
		*uart_regs[num].utxreg = elt;
		// enable tx interrupt
//      sbi(*uart_regs[num].ucsrb, UDRIE);
      uart_tx_ie(num, 1);  
	}
	else /* 5, 6, 7 or 8 bits */
#endif /* CONFIG_MODULE_UART_9BITS */
	{ 
		char elt = 0;

		if (CIRBUF_IS_EMPTY(&g_tx_fifo[num])) {
   		// disable tx interrupt
//         cbi(*uart_regs[num].ucsrb, UDRIE);
         uart_set_txie(num,0);
			return;
		}

		elt = cirbuf_get_tail(&g_tx_fifo[num]);
		cirbuf_del_tail(&g_tx_fifo[num]);
		
		// write on uart
//      uart_set_udr(num, elt);
      uart_set_utxreg(num, elt);
      
		// enable tx interrupt
//      sbi(*uart_regs[num].ucsrb, UDRIE);
      uart_set_txie(num, 1);	
	}
}

/**
 * UART RX Interrupt
 */
static void uart_recv_next_char(uint8_t num)
{
#ifdef CONFIG_MODULE_UART_9BITS
#error MODULE_UART_9BITS has not been ported to DSPIC yet
	if (uart_getconf_nbits() == 9) {
		int elt = 0;

      // read from uart
//    elt = uart_get_udr_9bits(num);
		elt = *uart_regs[num].urxreg;
   	if (CIRBUF_GET_FREELEN(&g_rx_fifo[num]) >= 2) {
			cirbuf_add_buf_head(&g_rx_fifo[num], (char *)&elt, 2);
		}

		if (rx_event[num])
			((event_9bits *)rx_event[num])(elt);
	}
	else 
#endif /* CONFIG_MODULE_UART_9BITS */
	{
		char elt = 0;

      while((*uart_regs[num].usta) & URXDA_MASK){ 
         // read from uart
//         elt = uart_get_udr(num);
   		elt = uart_get_urxreg(num);
   		if (!CIRBUF_IS_FULL(&g_rx_fifo[num])) {
   			cirbuf_add_head(&g_rx_fifo[num], elt);
   		}
   
   		if (rx_event[num])
   			rx_event[num](elt);
	   }
	}
}

/* init all uarts */
void uart_init(void)
{
//#if (defined UDR0) && (defined UART0_COMPILE)
#if (defined _U1TXIE) && (defined UART0_COMPILE)
//#if (defined UART0_COMPILE)
	uart_setconf(0, NULL);
	
	/* wait at least (1/baudrate) before sending first char */
   __delay32(F_CPU/UART0_BAUDRATE);
#endif

//#if (defined UDR1) && (defined UART1_COMPILE)
#if (defined _U2TXIE) && (defined UART1_COMPILE)
//#if (defined UART1_COMPILE)
	uart_setconf(1, NULL);
	
	/* wait at least (1/baudrate) before sending first char */
   __delay32(F_CPU/UART1_BAUDRATE);
#endif

}

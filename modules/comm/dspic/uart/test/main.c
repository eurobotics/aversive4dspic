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
 *  Revision : $Id: main.c,v 1.15.10.5 2008/12/27 16:29:08 zer0 Exp $
 *
 */ 
 
#if defined(__dsPIC30F__)
#include <p30fxxxx.h>
#elif defined(__dsPIC33F__)
#include <p33Fxxxx.h>
#elif defined(__PIC24H__)
#include <p24Hxxxx.h>
#endif 

#include <uart.h>
#include <configuration_bits_config.h>
#include <aversive/wait.h>

#include <stdio.h>

//#include <avr/io.h>
//#include <avr/pgmspace.h>

#include <pgmspace.h>

#include <oscillator.h>

/*
 * This code sends a counter value to uart.
 */
int main(void)
{  
	unsigned int i;

	/* initialize oscillator with the default parameters ( see
	 * oscillator_config.h ) */
	oscillator_init();  

   /* remap io config */
   _U1RXR = 8;
   _RP7R = 0b00011;
   _TRISB8 = 1; 
   _TRISB7 = 0;

	/* initialize uart with the default parameters ( see
	 * uart_config.h ) */
	uart_init();  
 
	/* enable interrupts */
	sei();

	/* send some single characters */
	for (i=0; i<10; i++) {
		uart_send(0, 'x');
		uart_send(0, '0' + i);
		wait_ms(100);
	}
	uart_send(0, '\n');
	uart_send(0, '\r');

	/* test loopback mode */
//   while(1){
//      uart_send(0,uart_recv(0));
//   };
  
	/* now we want to do a printf : we must register the
	 * uart0_send as stdout. Here no receive function is
	 * specified. */
//	fdevopen(uart0_dev_send, NULL);
  
	/** ready to do a nice printf on the uart */
	printf("Uart is cool !!\r\n");
  
  	/* one drawback of the previous printf is that the format
	 * chain is srored in RAM and this can take a huge size if
	 * there are many printf. To avoid this problem, please use
	 * printf_P together with PSTR, like in the next example. */ 
	while (1) {
		printf_P(PSTR("This format string takes no RAM "
			      "space. %i\r\n"), i++);
		wait_ms(1000);
	}
    
	return 0;
}

/*  
 *  Copyright Droids Corporation, Microb Technology, Eirbot (2009)
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
 *  Revision : $Id $
 *
 */

/* WARNING : this file is automatically generated by scripts.
 * You should not edit it. If you find something wrong in it,
 * write to zer0@droids-corp.org */


/* prescalers timer 0 */
#define TIMER0_PRESCALER_DIV_0          0
#define TIMER0_PRESCALER_DIV_1          1
#define TIMER0_PRESCALER_DIV_8          2
#define TIMER0_PRESCALER_DIV_64         3
#define TIMER0_PRESCALER_DIV_256        4
#define TIMER0_PRESCALER_DIV_1024       5
#define TIMER0_PRESCALER_DIV_FALL       6
#define TIMER0_PRESCALER_DIV_RISE       7

#define TIMER0_PRESCALER_REG_0          0
#define TIMER0_PRESCALER_REG_1          1
#define TIMER0_PRESCALER_REG_2          8
#define TIMER0_PRESCALER_REG_3          64
#define TIMER0_PRESCALER_REG_4          256
#define TIMER0_PRESCALER_REG_5          1024
#define TIMER0_PRESCALER_REG_6          -1
#define TIMER0_PRESCALER_REG_7          -2

/* prescalers timer 1 */
#define TIMER1_PRESCALER_DIV_0          0
#define TIMER1_PRESCALER_DIV_1          1
#define TIMER1_PRESCALER_DIV_8          2
#define TIMER1_PRESCALER_DIV_64         3
#define TIMER1_PRESCALER_DIV_256        4
#define TIMER1_PRESCALER_DIV_1024       5
#define TIMER1_PRESCALER_DIV_FALL       6
#define TIMER1_PRESCALER_DIV_RISE       7

#define TIMER1_PRESCALER_REG_0          0
#define TIMER1_PRESCALER_REG_1          1
#define TIMER1_PRESCALER_REG_2          8
#define TIMER1_PRESCALER_REG_3          64
#define TIMER1_PRESCALER_REG_4          256
#define TIMER1_PRESCALER_REG_5          1024
#define TIMER1_PRESCALER_REG_6          -1
#define TIMER1_PRESCALER_REG_7          -2


/* available timers */
#define TIMER0_AVAILABLE
#define TIMER1_AVAILABLE
#define TIMER1A_AVAILABLE
#define TIMER1B_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW_TOTAL_NUM 2

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE0_NUM 0
#define SIG_OUTPUT_COMPARE1A_NUM 1
#define SIG_OUTPUT_COMPARE1B_NUM 2
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 3

/* Pwm nums */
#define PWM0_NUM 0
#define PWM1A_NUM 1
#define PWM1B_NUM 2
#define PWM_TOTAL_NUM 3

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE1_NUM 0
#define SIG_INPUT_CAPTURE_TOTAL_NUM 1


/* UCSRC */
#define UCPOL_REG            UCSRC
#define UCSZ0_REG            UCSRC
#define UCSZ1_REG            UCSRC
#define USBS_REG             UCSRC
#define UPM0_REG             UCSRC
#define UPM1_REG             UCSRC
#define UMSEL_REG            UCSRC
/* #define URSEL_REG            UCSRC */ /* dup in UBRRH */

/* WDTCR */
#define WDP0_REG             WDTCR
#define WDP1_REG             WDTCR
#define WDP2_REG             WDTCR
#define WDE_REG              WDTCR
#define WDCE_REG             WDTCR

/* ICR1H */
#define ICR1H0_REG           ICR1H
#define ICR1H1_REG           ICR1H
#define ICR1H2_REG           ICR1H
#define ICR1H3_REG           ICR1H
#define ICR1H4_REG           ICR1H
#define ICR1H5_REG           ICR1H
#define ICR1H6_REG           ICR1H
#define ICR1H7_REG           ICR1H

/* TCCR0 */
#define CS00_REG             TCCR0
#define CS01_REG             TCCR0
#define CS02_REG             TCCR0
#define WGM01_REG            TCCR0
#define COM00_REG            TCCR0
#define COM01_REG            TCCR0
#define WGM00_REG            TCCR0
#define FOC0_REG             TCCR0

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* DDRB */
#define DDB0_REG             DDRB
#define DDB1_REG             DDRB
#define DDB2_REG             DDRB
#define DDB3_REG             DDRB
#define DDB4_REG             DDRB
#define DDB5_REG             DDRB
#define DDB6_REG             DDRB
#define DDB7_REG             DDRB

/* GICR */
#define IVCE_REG             GICR
#define IVSEL_REG            GICR
#define INT2_REG             GICR
#define INT0_REG             GICR
#define INT1_REG             GICR

/* SPSR */
#define SPI2X_REG            SPSR
#define WCOL_REG             SPSR
#define SPIF_REG             SPSR

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* DDRC */
#define DDC0_REG             DDRC
#define DDC1_REG             DDRC
#define DDC2_REG             DDRC
#define DDC3_REG             DDRC
#define DDC4_REG             DDRC
#define DDC5_REG             DDRC
#define DDC6_REG             DDRC
#define DDC7_REG             DDRC

/* DDRA */
#define DDA0_REG             DDRA
#define DDA1_REG             DDRA
#define DDA2_REG             DDRA
#define DDA3_REG             DDRA
#define DDA4_REG             DDRA
#define DDA5_REG             DDRA
#define DDA6_REG             DDRA
#define DDA7_REG             DDRA

/* TCCR1A */
#define WGM10_REG            TCCR1A
#define WGM11_REG            TCCR1A
#define FOC1B_REG            TCCR1A
#define FOC1A_REG            TCCR1A
#define COM1B0_REG           TCCR1A
#define COM1B1_REG           TCCR1A
#define COM1A0_REG           TCCR1A
#define COM1A1_REG           TCCR1A

/* DDRD */
#define DDD0_REG             DDRD
#define DDD1_REG             DDRD
#define DDD2_REG             DDRD
#define DDD3_REG             DDRD
#define DDD4_REG             DDRD
#define DDD5_REG             DDRD
#define DDD6_REG             DDRD
#define DDD7_REG             DDRD

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B
#define WGM12_REG            TCCR1B
#define WGM13_REG            TCCR1B
#define ICES1_REG            TCCR1B
#define ICNC1_REG            TCCR1B

/* GIFR */
#define INTF2_REG            GIFR
#define INTF0_REG            GIFR
#define INTF1_REG            GIFR

/* TIMSK */
#define OCIE0_REG            TIMSK
#define TOIE0_REG            TIMSK
#define TICIE1_REG           TIMSK
#define OCIE1B_REG           TIMSK
#define OCIE1A_REG           TIMSK
#define TOIE1_REG            TIMSK

/* UCSRA */
#define MPCM_REG             UCSRA
#define U2X_REG              UCSRA
#define UPE_REG              UCSRA
#define DOR_REG              UCSRA
#define FE_REG               UCSRA
#define UDRE_REG             UCSRA
#define TXC_REG              UCSRA
#define RXC_REG              UCSRA

/* SPDR */
#define SPDR0_REG            SPDR
#define SPDR1_REG            SPDR
#define SPDR2_REG            SPDR
#define SPDR3_REG            SPDR
#define SPDR4_REG            SPDR
#define SPDR5_REG            SPDR
#define SPDR6_REG            SPDR
#define SPDR7_REG            SPDR

/* SFIOR */
#define PSR10_REG            SFIOR
#define PUD_REG              SFIOR
#define XMM0_REG             SFIOR
#define XMM1_REG             SFIOR
#define XMM2_REG             SFIOR
#define XMBK_REG             SFIOR

/* ACSR */
#define ACIS0_REG            ACSR
#define ACIS1_REG            ACSR
#define ACIC_REG             ACSR
#define ACIE_REG             ACSR
#define ACI_REG              ACSR
#define ACO_REG              ACSR
#define ACBG_REG             ACSR
#define ACD_REG              ACSR

/* SPH */
#define SP8_REG              SPH
#define SP9_REG              SPH
#define SP10_REG             SPH
#define SP11_REG             SPH
#define SP12_REG             SPH
#define SP13_REG             SPH
#define SP14_REG             SPH
#define SP15_REG             SPH

/* OCR1BL */
#define OCR1BL0_REG          OCR1BL
#define OCR1BL1_REG          OCR1BL
#define OCR1BL2_REG          OCR1BL
#define OCR1BL3_REG          OCR1BL
#define OCR1BL4_REG          OCR1BL
#define OCR1BL5_REG          OCR1BL
#define OCR1BL6_REG          OCR1BL
#define OCR1BL7_REG          OCR1BL

/* UCSRB */
#define TXB8_REG             UCSRB
#define RXB8_REG             UCSRB
#define UCSZ2_REG            UCSRB
#define TXEN_REG             UCSRB
#define RXEN_REG             UCSRB
#define UDRIE_REG            UCSRB
#define TXCIE_REG            UCSRB
#define RXCIE_REG            UCSRB

/* EMCUCR */
#define ISC2_REG             EMCUCR
#define SRW11_REG            EMCUCR
#define SRW00_REG            EMCUCR
#define SRW01_REG            EMCUCR
#define SRL0_REG             EMCUCR
#define SRL1_REG             EMCUCR
#define SRL2_REG             EMCUCR
#define SM0_REG              EMCUCR

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* OCR1BH */
#define OCR1BH0_REG          OCR1BH
#define OCR1BH1_REG          OCR1BH
#define OCR1BH2_REG          OCR1BH
#define OCR1BH3_REG          OCR1BH
#define OCR1BH4_REG          OCR1BH
#define OCR1BH5_REG          OCR1BH
#define OCR1BH6_REG          OCR1BH
#define OCR1BH7_REG          OCR1BH

/* UDR */
#define UDR0_REG             UDR
#define UDR1_REG             UDR
#define UDR2_REG             UDR
#define UDR3_REG             UDR
#define UDR4_REG             UDR
#define UDR5_REG             UDR
#define UDR6_REG             UDR
#define UDR7_REG             UDR

/* PIND */
#define PIND0_REG            PIND
#define PIND1_REG            PIND
#define PIND2_REG            PIND
#define PIND3_REG            PIND
#define PIND4_REG            PIND
#define PIND5_REG            PIND
#define PIND6_REG            PIND
#define PIND7_REG            PIND

/* SPMCR */
#define SPMEN_REG            SPMCR
#define PGERS_REG            SPMCR
#define PGWRT_REG            SPMCR
#define BLBSET_REG           SPMCR
#define RWWSRE_REG           SPMCR
#define RWWSB_REG            SPMCR
#define SPMIE_REG            SPMCR

/* UBRRH */
#define UBRR8_REG            UBRRH
#define UBRR9_REG            UBRRH
#define UBRR10_REG           UBRRH
#define UBRR11_REG           UBRRH
/* #define URSEL_REG            UBRRH */ /* dup in UCSRC */

/* DDRE */
#define DDE0_REG             DDRE
#define DDE1_REG             DDRE
#define DDE2_REG             DDRE

/* UBRRL */
#define UBRR0_REG            UBRRL
#define UBRR1_REG            UBRRL
#define UBRR2_REG            UBRRL
#define UBRR3_REG            UBRRL
#define UBRR4_REG            UBRRL
#define UBRR5_REG            UBRRL
#define UBRR6_REG            UBRRL
#define UBRR7_REG            UBRRL

/* EECR */
#define EERE_REG             EECR
#define EEWE_REG             EECR
#define EEMWE_REG            EECR
#define EERIE_REG            EECR

/* OSCCAL */
#define CAL0_REG             OSCCAL
#define CAL1_REG             OSCCAL
#define CAL2_REG             OSCCAL
#define CAL3_REG             OSCCAL
#define CAL4_REG             OSCCAL
#define CAL5_REG             OSCCAL
#define CAL6_REG             OSCCAL
#define CAL7_REG             OSCCAL

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB
#define PORTB4_REG           PORTB
#define PORTB5_REG           PORTB
#define PORTB6_REG           PORTB
#define PORTB7_REG           PORTB

/* PORTD */
#define PORTD0_REG           PORTD
#define PORTD1_REG           PORTD
#define PORTD2_REG           PORTD
#define PORTD3_REG           PORTD
#define PORTD4_REG           PORTD
#define PORTD5_REG           PORTD
#define PORTD6_REG           PORTD
#define PORTD7_REG           PORTD

/* PORTE */
#define PORTE0_REG           PORTE
#define PORTE1_REG           PORTE
#define PORTE2_REG           PORTE

/* TCNT1H */
#define TCNT1H0_REG          TCNT1H
#define TCNT1H1_REG          TCNT1H
#define TCNT1H2_REG          TCNT1H
#define TCNT1H3_REG          TCNT1H
#define TCNT1H4_REG          TCNT1H
#define TCNT1H5_REG          TCNT1H
#define TCNT1H6_REG          TCNT1H
#define TCNT1H7_REG          TCNT1H

/* PORTC */
#define PORTC0_REG           PORTC
#define PORTC1_REG           PORTC
#define PORTC2_REG           PORTC
#define PORTC3_REG           PORTC
#define PORTC4_REG           PORTC
#define PORTC5_REG           PORTC
#define PORTC6_REG           PORTC
#define PORTC7_REG           PORTC

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA
#define PORTA2_REG           PORTA
#define PORTA3_REG           PORTA
#define PORTA4_REG           PORTA
#define PORTA5_REG           PORTA
#define PORTA6_REG           PORTA
#define PORTA7_REG           PORTA

/* TCNT0 */
#define TCNT0_0_REG          TCNT0
#define TCNT0_1_REG          TCNT0
#define TCNT0_2_REG          TCNT0
#define TCNT0_3_REG          TCNT0
#define TCNT0_4_REG          TCNT0
#define TCNT0_5_REG          TCNT0
#define TCNT0_6_REG          TCNT0
#define TCNT0_7_REG          TCNT0

/* MCUCSR */
#define PORF_REG             MCUCSR
#define EXTRF_REG            MCUCSR
#define BORF_REG             MCUCSR
#define WDRF_REG             MCUCSR
#define SM2_REG              MCUCSR

/* TIFR */
#define OCF0_REG             TIFR
#define TOV0_REG             TIFR
#define ICF1_REG             TIFR
#define OCF1B_REG            TIFR
#define OCF1A_REG            TIFR
#define TOV1_REG             TIFR

/* EEARH */
#define EEAR8_REG            EEARH

/* EEARL */
#define EEAR0_REG            EEARL
#define EEAR1_REG            EEARL
#define EEAR2_REG            EEARL
#define EEAR3_REG            EEARL
#define EEAR4_REG            EEARL
#define EEAR5_REG            EEARL
#define EEAR6_REG            EEARL
#define EEAR7_REG            EEARL

/* PINC */
#define PINC0_REG            PINC
#define PINC1_REG            PINC
#define PINC2_REG            PINC
#define PINC3_REG            PINC
#define PINC4_REG            PINC
#define PINC5_REG            PINC
#define PINC6_REG            PINC
#define PINC7_REG            PINC

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA
#define PINA2_REG            PINA
#define PINA3_REG            PINA
#define PINA4_REG            PINA
#define PINA5_REG            PINA
#define PINA6_REG            PINA
#define PINA7_REG            PINA

/* PINE */
#define PINE0_REG            PINE
#define PINE1_REG            PINE
#define PINE2_REG            PINE

/* MCUCR */
#define ISC00_REG            MCUCR
#define ISC01_REG            MCUCR
#define ISC10_REG            MCUCR
#define ISC11_REG            MCUCR
#define SM1_REG              MCUCR
#define SE_REG               MCUCR
#define SRW10_REG            MCUCR
#define SRE_REG              MCUCR

/* OCR1AH */
#define OCR1AH0_REG          OCR1AH
#define OCR1AH1_REG          OCR1AH
#define OCR1AH2_REG          OCR1AH
#define OCR1AH3_REG          OCR1AH
#define OCR1AH4_REG          OCR1AH
#define OCR1AH5_REG          OCR1AH
#define OCR1AH6_REG          OCR1AH
#define OCR1AH7_REG          OCR1AH

/* OCR1AL */
#define OCR1AL0_REG          OCR1AL
#define OCR1AL1_REG          OCR1AL
#define OCR1AL2_REG          OCR1AL
#define OCR1AL3_REG          OCR1AL
#define OCR1AL4_REG          OCR1AL
#define OCR1AL5_REG          OCR1AL
#define OCR1AL6_REG          OCR1AL
#define OCR1AL7_REG          OCR1AL

/* OCR0 */
#define OCR0_0_REG           OCR0
#define OCR0_1_REG           OCR0
#define OCR0_2_REG           OCR0
#define OCR0_3_REG           OCR0
#define OCR0_4_REG           OCR0
#define OCR0_5_REG           OCR0
#define OCR0_6_REG           OCR0
#define OCR0_7_REG           OCR0

/* SPCR */
#define SPR0_REG             SPCR
#define SPR1_REG             SPCR
#define CPHA_REG             SPCR
#define CPOL_REG             SPCR
#define MSTR_REG             SPCR
#define DORD_REG             SPCR
#define SPE_REG              SPCR
#define SPIE_REG             SPCR

/* ICR1L */
#define ICR1L0_REG           ICR1L
#define ICR1L1_REG           ICR1L
#define ICR1L2_REG           ICR1L
#define ICR1L3_REG           ICR1L
#define ICR1L4_REG           ICR1L
#define ICR1L5_REG           ICR1L
#define ICR1L6_REG           ICR1L
#define ICR1L7_REG           ICR1L

/* pins mapping */
#define AD0_PORT PORTA
#define AD0_BIT 0

#define AD1_PORT PORTA
#define AD1_BIT 1

#define AD2_PORT PORTA
#define AD2_BIT 2

#define AD3_PORT PORTA
#define AD3_BIT 3

#define AD4_PORT PORTA
#define AD4_BIT 4

#define AD5_PORT PORTA
#define AD5_BIT 5

#define AD6_PORT PORTA
#define AD6_BIT 6

#define AD7_PORT PORTA
#define AD7_BIT 7

#define OC0_PORT PORTB
#define OC0_BIT 0
#define T0_PORT PORTB
#define T0_BIT 0

#define T1_PORT PORTB
#define T1_BIT 1

#define AIN0_PORT PORTB
#define AIN0_BIT 2

#define AIN1_PORT PORTB
#define AIN1_BIT 3

#define SS_PORT PORTB
#define SS_BIT 4

#define MOSI_PORT PORTB
#define MOSI_BIT 5

#define MISO_PORT PORTB
#define MISO_BIT 6

#define SCK_PORT PORTB
#define SCK_BIT 7

#define A8_PORT PORTC
#define A8_BIT 0

#define A9_PORT PORTC
#define A9_BIT 1

#define A10_PORT PORTC
#define A10_BIT 2

#define A11_PORT PORTC
#define A11_BIT 3

#define A12_PORT PORTC
#define A12_BIT 4

#define A13_PORT PORTC
#define A13_BIT 5

#define A14_PORT PORTC
#define A14_BIT 6

#define A15_PORT PORTC
#define A15_BIT 7

#define RXD_PORT PORTD
#define RXD_BIT 0

#define TXD_PORT PORTD
#define TXD_BIT 1

#define INT0_PORT PORTD
#define INT0_BIT 2

#define INT1_PORT PORTD
#define INT1_BIT 3

#define XCK_PORT PORTD
#define XCK_BIT 4

#define OC1A_PORT PORTD
#define OC1A_BIT 5

#define WR_PORT PORTD
#define WR_BIT 6

#define RD_PORT PORTD
#define RD_BIT 7

#define ICP_PORT PORTE
#define ICP_BIT 0
#define INT2_PORT PORTE
#define INT2_BIT 0

#define ALE_PORT PORTE
#define ALE_BIT 1

#define OC1B_PORT PORTE
#define OC1B_BIT 2



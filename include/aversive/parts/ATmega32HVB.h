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
#define TIMER0A_AVAILABLE
#define TIMER0B_AVAILABLE
#define TIMER1_AVAILABLE
#define TIMER1A_AVAILABLE
#define TIMER1B_AVAILABLE

/* overflow interrupt number */
#define SIG_OVERFLOW0_NUM 0
#define SIG_OVERFLOW1_NUM 1
#define SIG_OVERFLOW_TOTAL_NUM 2

/* output compare interrupt number */
#define SIG_OUTPUT_COMPARE0A_NUM 0
#define SIG_OUTPUT_COMPARE0B_NUM 1
#define SIG_OUTPUT_COMPARE1A_NUM 2
#define SIG_OUTPUT_COMPARE1B_NUM 3
#define SIG_OUTPUT_COMPARE_TOTAL_NUM 4

/* Pwm nums */
#define PWM0A_NUM 0
#define PWM0B_NUM 1
#define PWM1A_NUM 2
#define PWM1B_NUM 3
#define PWM_TOTAL_NUM 4

/* input capture interrupt number */
#define SIG_INPUT_CAPTURE_TOTAL_NUM 0


/* CADAC2 */
#define CADAC16_REG          CADAC2
#define CADAC17_REG          CADAC2
#define CADAC18_REG          CADAC2
#define CADAC19_REG          CADAC2
#define CADAC20_REG          CADAC2
#define CADAC21_REG          CADAC2
#define CADAC22_REG          CADAC2
#define CADAC23_REG          CADAC2

/* CADAC3 */
#define CADAC24_REG          CADAC3
#define CADAC25_REG          CADAC3
#define CADAC26_REG          CADAC3
#define CADAC27_REG          CADAC3
#define CADAC28_REG          CADAC3
#define CADAC29_REG          CADAC3
#define CADAC30_REG          CADAC3
#define CADAC31_REG          CADAC3

/* CADAC0 */
#define CADAC00_REG          CADAC0
#define CADAC01_REG          CADAC0
#define CADAC02_REG          CADAC0
#define CADAC03_REG          CADAC0
#define CADAC04_REG          CADAC0
#define CADAC05_REG          CADAC0
#define CADAC06_REG          CADAC0
#define CADAC07_REG          CADAC0

/* CADAC1 */
#define CADAC08_REG          CADAC1
#define CADAC09_REG          CADAC1
#define CADAC10_REG          CADAC1
#define CADAC11_REG          CADAC1
#define CADAC12_REG          CADAC1
#define CADAC13_REG          CADAC1
#define CADAC14_REG          CADAC1
#define CADAC15_REG          CADAC1

/* BPIMSK */
#define CHCIE_REG            BPIMSK
#define DHCIE_REG            BPIMSK
#define COCIE_REG            BPIMSK
#define DOCIE_REG            BPIMSK
#define SCIE_REG             BPIMSK

/* TCNT0H */
#define TCNT0H0_REG          TCNT0H
#define TCNT0H1_REG          TCNT0H
#define TCNT0H2_REG          TCNT0H
#define TCNT0H3_REG          TCNT0H
#define TCNT0H4_REG          TCNT0H
#define TCNT0H5_REG          TCNT0H
#define TCNT0H6_REG          TCNT0H
#define TCNT0H7_REG          TCNT0H

/* TCNT0L */
#define TCNT0L0_REG          TCNT0L
#define TCNT0L1_REG          TCNT0L
#define TCNT0L2_REG          TCNT0L
#define TCNT0L3_REG          TCNT0L
#define TCNT0L4_REG          TCNT0L
#define TCNT0L5_REG          TCNT0L
#define TCNT0L6_REG          TCNT0L
#define TCNT0L7_REG          TCNT0L

/* WDTCSR */
#define WDP0_REG             WDTCSR
#define WDP1_REG             WDTCSR
#define WDP2_REG             WDTCSR
#define WDE_REG              WDTCSR
#define WDCE_REG             WDTCSR
#define WDP3_REG             WDTCSR
#define WDIE_REG             WDTCSR
#define WDIF_REG             WDTCSR

/* EEDR */
#define EEDR0_REG            EEDR
#define EEDR1_REG            EEDR
#define EEDR2_REG            EEDR
#define EEDR3_REG            EEDR
#define EEDR4_REG            EEDR
#define EEDR5_REG            EEDR
#define EEDR6_REG            EEDR
#define EEDR7_REG            EEDR

/* SPDR */
#define SPDR0_REG            SPDR
#define SPDR1_REG            SPDR
#define SPDR2_REG            SPDR
#define SPDR3_REG            SPDR
#define SPDR4_REG            SPDR
#define SPDR5_REG            SPDR
#define SPDR6_REG            SPDR
#define SPDR7_REG            SPDR

/* SPSR */
#define SPI2X_REG            SPSR
#define WCOL_REG             SPSR
#define SPIF_REG             SPSR

/* SPH */
#define SP8_REG              SPH
#define SP9_REG              SPH
#define SP10_REG             SPH
#define SP11_REG             SPH
#define SP12_REG             SPH
#define SP13_REG             SPH
#define SP14_REG             SPH
#define SP15_REG             SPH

/* SPL */
#define SP0_REG              SPL
#define SP1_REG              SPL
#define SP2_REG              SPL
#define SP3_REG              SPL
#define SP4_REG              SPL
#define SP5_REG              SPL
#define SP6_REG              SPL
#define SP7_REG              SPL

/* BPCOCD */
#define COCDL0_REG           BPCOCD
#define COCDL1_REG           BPCOCD
#define COCDL2_REG           BPCOCD
#define COCDL3_REG           BPCOCD
#define COCDL4_REG           BPCOCD
#define COCDL5_REG           BPCOCD
#define COCDL6_REG           BPCOCD
#define COCDL7_REG           BPCOCD

/* TWSR */
#define TWPS0_REG            TWSR
#define TWPS1_REG            TWSR
#define TWS3_REG             TWSR
#define TWS4_REG             TWSR
#define TWS5_REG             TWSR
#define TWS6_REG             TWSR
#define TWS7_REG             TWSR

/* TCNT1L */
#define TCNT1L0_REG          TCNT1L
#define TCNT1L1_REG          TCNT1L
#define TCNT1L2_REG          TCNT1L
#define TCNT1L3_REG          TCNT1L
#define TCNT1L4_REG          TCNT1L
#define TCNT1L5_REG          TCNT1L
#define TCNT1L6_REG          TCNT1L
#define TCNT1L7_REG          TCNT1L

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

/* PORTA */
#define PORTA0_REG           PORTA
#define PORTA1_REG           PORTA
#define PORTA2_REG           PORTA
#define PORTA3_REG           PORTA

/* BPSCD */
#define SCDL0_REG            BPSCD
#define SCDL1_REG            BPSCD
#define SCDL2_REG            BPSCD
#define SCDL3_REG            BPSCD
#define SCDL4_REG            BPSCD
#define SCDL5_REG            BPSCD
#define SCDL6_REG            BPSCD
#define SCDL7_REG            BPSCD

/* GPIOR0 */
#define GPIOR00_REG          GPIOR0
#define GPIOR01_REG          GPIOR0
#define GPIOR02_REG          GPIOR0
#define GPIOR03_REG          GPIOR0
#define GPIOR04_REG          GPIOR0
#define GPIOR05_REG          GPIOR0
#define GPIOR06_REG          GPIOR0
#define GPIOR07_REG          GPIOR0

/* VADCH */
#define VADC8_REG            VADCH
#define VADC9_REG            VADCH
#define VADC10_REG           VADCH
#define VADC11_REG           VADCH

/* VADCL */
#define VADC0_REG            VADCL
#define VADC1_REG            VADCL
#define VADC2_REG            VADCL
#define VADC3_REG            VADCL
#define VADC4_REG            VADCL
#define VADC5_REG            VADCL
#define VADC6_REG            VADCL
#define VADC7_REG            VADCL

/* EICRA */
#define ISC00_REG            EICRA
#define ISC01_REG            EICRA
#define ISC10_REG            EICRA
#define ISC11_REG            EICRA
#define ISC20_REG            EICRA
#define ISC21_REG            EICRA
#define ISC30_REG            EICRA
#define ISC31_REG            EICRA

/* FOSCCAL */
#define FCAL0_REG            FOSCCAL
#define FCAL1_REG            FOSCCAL
#define FCAL2_REG            FOSCCAL
#define FCAL3_REG            FOSCCAL
#define FCAL4_REG            FOSCCAL
#define FCAL5_REG            FOSCCAL
#define FCAL6_REG            FOSCCAL
#define FCAL7_REG            FOSCCAL

/* DIDR0 */
#define PA0DID_REG           DIDR0
#define PA1DID_REG           DIDR0

/* OCR1A */
#define OCR1A0_REG           OCR1A
#define OCR1A1_REG           OCR1A
#define OCR1A2_REG           OCR1A
#define OCR1A3_REG           OCR1A
#define OCR1A4_REG           OCR1A
#define OCR1A5_REG           OCR1A
#define OCR1A6_REG           OCR1A
#define OCR1A7_REG           OCR1A

/* CLKPR */
#define CLKPS0_REG           CLKPR
#define CLKPS1_REG           CLKPR
#define CLKPCE_REG           CLKPR

/* OCR1B */
#define OCR1B0_REG           OCR1B
#define OCR1B1_REG           OCR1B
#define OCR1B2_REG           OCR1B
#define OCR1B3_REG           OCR1B
#define OCR1B4_REG           OCR1B
#define OCR1B5_REG           OCR1B
#define OCR1B6_REG           OCR1B
#define OCR1B7_REG           OCR1B

/* SREG */
#define C_REG                SREG
#define Z_REG                SREG
#define N_REG                SREG
#define V_REG                SREG
#define S_REG                SREG
#define H_REG                SREG
#define T_REG                SREG
#define I_REG                SREG

/* BPCR */
#define CHCD_REG             BPCR
#define DHCD_REG             BPCR
#define COCD_REG             BPCR
#define DOCD_REG             BPCR
#define SCD_REG              BPCR
#define EPID_REG             BPCR

/* DDRB */
#define DDB0_REG             DDRB
#define DDB1_REG             DDRB
#define DDB2_REG             DDRB
#define DDB3_REG             DDRB
#define DDB4_REG             DDRB
#define DDB5_REG             DDRB
#define DDB6_REG             DDRB
#define DDB7_REG             DDRB

/* DDRA */
#define DDA0_REG             DDRA
#define DDA1_REG             DDRA
#define DDA2_REG             DDRA
#define DDA3_REG             DDRA

/* TCCR1A */
#define WGM10_REG            TCCR1A
#define ICS1_REG             TCCR1A
#define ICES1_REG            TCCR1A
#define ICNC1_REG            TCCR1A
#define ICEN1_REG            TCCR1A
#define TCW1_REG             TCCR1A

/* TCCR1B */
#define CS10_REG             TCCR1B
#define CS11_REG             TCCR1B
#define CS12_REG             TCCR1B

/* BPCHCD */
#define CHCDL0_REG           BPCHCD
#define CHCDL1_REG           BPCHCD
#define CHCDL2_REG           BPCHCD
#define CHCDL3_REG           BPCHCD
#define CHCDL4_REG           BPCHCD
#define CHCDL5_REG           BPCHCD
#define CHCDL6_REG           BPCHCD
#define CHCDL7_REG           BPCHCD

/* CADCSRC */
#define CADVSE_REG           CADCSRC

/* CADCSRB */
#define CADICIF_REG          CADCSRB
#define CADRCIF_REG          CADCSRB
#define CADACIF_REG          CADCSRB
#define CADICIE_REG          CADCSRB
#define CADRCIE_REG          CADCSRB
#define CADACIE_REG          CADCSRB

/* CADCSRA */
#define CADSE_REG            CADCSRA
#define CADSI0_REG           CADCSRA
#define CADSI1_REG           CADCSRA
#define CADAS0_REG           CADCSRA
#define CADAS1_REG           CADCSRA
#define CADUB_REG            CADCSRA
#define CADPOL_REG           CADCSRA
#define CADEN_REG            CADCSRA

/* GPIOR1 */
#define GPIOR10_REG          GPIOR1
#define GPIOR11_REG          GPIOR1
#define GPIOR12_REG          GPIOR1
#define GPIOR13_REG          GPIOR1
#define GPIOR14_REG          GPIOR1
#define GPIOR15_REG          GPIOR1
#define GPIOR16_REG          GPIOR1
#define GPIOR17_REG          GPIOR1

/* BPPLR */
#define BPPL_REG             BPPLR
#define BPPLE_REG            BPPLR

/* GPIOR2 */
#define GPIOR20_REG          GPIOR2
#define GPIOR21_REG          GPIOR2
#define GPIOR22_REG          GPIOR2
#define GPIOR23_REG          GPIOR2
#define GPIOR24_REG          GPIOR2
#define GPIOR25_REG          GPIOR2
#define GPIOR26_REG          GPIOR2
#define GPIOR27_REG          GPIOR2

/* CADRDC */
#define CADRDC0_REG          CADRDC
#define CADRDC1_REG          CADRDC
#define CADRDC2_REG          CADRDC
#define CADRDC3_REG          CADRDC
#define CADRDC4_REG          CADRDC
#define CADRDC5_REG          CADRDC
#define CADRDC6_REG          CADRDC
#define CADRDC7_REG          CADRDC

/* PCICR */
#define PCIE0_REG            PCICR
#define PCIE1_REG            PCICR

/* TWAR */
#define TWGCE_REG            TWAR
#define TWA0_REG             TWAR
#define TWA1_REG             TWAR
#define TWA2_REG             TWAR
#define TWA3_REG             TWAR
#define TWA4_REG             TWAR
#define TWA5_REG             TWAR
#define TWA6_REG             TWAR

/* TCCR0B */
#define CS00_REG             TCCR0B
#define CS01_REG             TCCR0B
#define CS02_REG             TCCR0B

/* TCCR0A */
#define WGM00_REG            TCCR0A
#define ICS0_REG             TCCR0A
#define ICES0_REG            TCCR0A
#define ICNC0_REG            TCCR0A
#define ICEN0_REG            TCCR0A
#define TCW0_REG             TCCR0A

/* BPDHCD */
#define DHCDL0_REG           BPDHCD
#define DHCDL1_REG           BPDHCD
#define DHCDL2_REG           BPDHCD
#define DHCDL3_REG           BPDHCD
#define DHCDL4_REG           BPDHCD
#define DHCDL5_REG           BPDHCD
#define DHCDL6_REG           BPDHCD
#define DHCDL7_REG           BPDHCD

/* TWBCSR */
#define TWBCIP_REG           TWBCSR
#define TWBDT0_REG           TWBCSR
#define TWBDT1_REG           TWBCSR
#define TWBCIE_REG           TWBCSR
#define TWBCIF_REG           TWBCSR

/* SPCR */
#define SPR0_REG             SPCR
#define SPR1_REG             SPCR
#define CPHA_REG             SPCR
#define CPOL_REG             SPCR
#define MSTR_REG             SPCR
#define DORD_REG             SPCR
#define SPE_REG              SPCR
#define SPIE_REG             SPCR

/* TIFR1 */
#define TOV1_REG             TIFR1
#define OCF1A_REG            TIFR1
#define OCF1B_REG            TIFR1
#define ICF1_REG             TIFR1

/* GTCCR */
#define PSRSYNC_REG          GTCCR
#define TSM_REG              GTCCR

/* TWBR */
#define TWBR0_REG            TWBR
#define TWBR1_REG            TWBR
#define TWBR2_REG            TWBR
#define TWBR3_REG            TWBR
#define TWBR4_REG            TWBR
#define TWBR5_REG            TWBR
#define TWBR6_REG            TWBR
#define TWBR7_REG            TWBR

/* BGCRR */
#define BGCR0_REG            BGCRR
#define BGCR1_REG            BGCRR
#define BGCR2_REG            BGCRR
#define BGCR3_REG            BGCRR
#define BGCR4_REG            BGCRR
#define BGCR5_REG            BGCRR
#define BGCR6_REG            BGCRR
#define BGCR7_REG            BGCRR

/* PCIFR */
#define PCIF0_REG            PCIFR
#define PCIF1_REG            PCIFR

/* FCSR */
#define CFE_REG              FCSR
#define DFE_REG              FCSR
#define CPS_REG              FCSR
#define DUVRD_REG            FCSR

/* VADMUX */
#define VADMUX0_REG          VADMUX
#define VADMUX1_REG          VADMUX
#define VADMUX2_REG          VADMUX
#define VADMUX3_REG          VADMUX

/* MCUSR */
#define PORF_REG             MCUSR
#define EXTRF_REG            MCUSR
#define BODRF_REG            MCUSR
#define WDRF_REG             MCUSR
#define OCDRF_REG            MCUSR

/* EECR */
#define EERE_REG             EECR
#define EEPE_REG             EECR
#define EEMPE_REG            EECR
#define EERIE_REG            EECR
#define EEPM0_REG            EECR
#define EEPM1_REG            EECR

/* SMCR */
#define SE_REG               SMCR
#define SM0_REG              SMCR
#define SM1_REG              SMCR
#define SM2_REG              SMCR

/* TWCR */
#define TWIE_REG             TWCR
#define TWEN_REG             TWCR
#define TWWC_REG             TWCR
#define TWSTO_REG            TWCR
#define TWSTA_REG            TWCR
#define TWEA_REG             TWCR
#define TWINT_REG            TWCR

/* EEARH */
#define EEAR8_REG            EEARH
#define EEAR9_REG            EEARH

/* BPIFR */
#define CHCIF_REG            BPIFR
#define DHCIF_REG            BPIFR
#define COCIF_REG            BPIFR
#define DOCIF_REG            BPIFR
#define SCIF_REG             BPIFR

/* EEARL */
#define EEAR0_REG            EEARL
#define EEAR1_REG            EEARL
#define EEAR2_REG            EEARL
#define EEAR3_REG            EEARL
#define EEAR4_REG            EEARL
#define EEAR5_REG            EEARL
#define EEAR6_REG            EEARL
#define EEAR7_REG            EEARL

/* VADCSR */
#define VADCCIE_REG          VADCSR
#define VADCCIF_REG          VADCSR
#define VADSC_REG            VADCSR
#define VADEN_REG            VADCSR

/* MCUCR */
#define IVCE_REG             MCUCR
#define IVSEL_REG            MCUCR
#define PUD_REG              MCUCR
#define CKOE_REG             MCUCR

/* CBCR */
#define CBE1_REG             CBCR
#define CBE2_REG             CBCR
#define CBE3_REG             CBCR
#define CBE4_REG             CBCR

/* CADRCC */
#define CADRCC0_REG          CADRCC
#define CADRCC1_REG          CADRCC
#define CADRCC2_REG          CADRCC
#define CADRCC3_REG          CADRCC
#define CADRCC4_REG          CADRCC
#define CADRCC5_REG          CADRCC
#define CADRCC6_REG          CADRCC
#define CADRCC7_REG          CADRCC

/* BPOCTR */
#define OCPT0_REG            BPOCTR
#define OCPT1_REG            BPOCTR
#define OCPT2_REG            BPOCTR
#define OCPT3_REG            BPOCTR
#define OCPT4_REG            BPOCTR
#define OCPT5_REG            BPOCTR

/* PINA */
#define PINA0_REG            PINA
#define PINA1_REG            PINA
#define PINA2_REG            PINA
#define PINA3_REG            PINA

/* BPDOCD */
#define DOCDL0_REG           BPDOCD
#define DOCDL1_REG           BPDOCD
#define DOCDL2_REG           BPDOCD
#define DOCDL3_REG           BPDOCD
#define DOCDL4_REG           BPDOCD
#define DOCDL5_REG           BPDOCD
#define DOCDL6_REG           BPDOCD
#define DOCDL7_REG           BPDOCD

/* BPSCTR */
#define SCPT0_REG            BPSCTR
#define SCPT1_REG            BPSCTR
#define SCPT2_REG            BPSCTR
#define SCPT3_REG            BPSCTR
#define SCPT4_REG            BPSCTR
#define SCPT5_REG            BPSCTR
#define SCPT6_REG            BPSCTR

/* TWDR */
#define TWD0_REG             TWDR
#define TWD1_REG             TWDR
#define TWD2_REG             TWDR
#define TWD3_REG             TWDR
#define TWD4_REG             TWDR
#define TWD5_REG             TWDR
#define TWD6_REG             TWDR
#define TWD7_REG             TWDR

/* BPHCTR */
#define HCPT0_REG            BPHCTR
#define HCPT1_REG            BPHCTR
#define HCPT2_REG            BPHCTR
#define HCPT3_REG            BPHCTR
#define HCPT4_REG            BPHCTR
#define HCPT5_REG            BPHCTR

/* EIMSK */
#define INT0_REG             EIMSK
#define INT1_REG             EIMSK
#define INT2_REG             EIMSK
#define INT3_REG             EIMSK

/* PRR0 */
#define PRVADC_REG           PRR0
#define PRTIM0_REG           PRR0
#define PRTIM1_REG           PRR0
#define PRSPI_REG            PRR0
#define PRVRM_REG            PRR0
#define PRTWI_REG            PRR0

/* OCR0A */
#define OCR0A0_REG           OCR0A
#define OCR0A1_REG           OCR0A
#define OCR0A2_REG           OCR0A
#define OCR0A3_REG           OCR0A
#define OCR0A4_REG           OCR0A
#define OCR0A5_REG           OCR0A
#define OCR0A6_REG           OCR0A
#define OCR0A7_REG           OCR0A

/* ROCR */
#define ROCWIE_REG           ROCR
#define ROCWIF_REG           ROCR
#define ROCD_REG             ROCR
#define ROCS_REG             ROCR

/* OCR0B */
#define OCR0B0_REG           OCR0B
#define OCR0B1_REG           OCR0B
#define OCR0B2_REG           OCR0B
#define OCR0B3_REG           OCR0B
#define OCR0B4_REG           OCR0B
#define OCR0B5_REG           OCR0B
#define OCR0B6_REG           OCR0B
#define OCR0B7_REG           OCR0B

/* CADICH */
#define CADICH0_REG          CADICH
#define CADICH1_REG          CADICH
#define CADICH2_REG          CADICH
#define CADICH3_REG          CADICH
#define CADICH4_REG          CADICH
#define CADICH5_REG          CADICH
#define CADICH6_REG          CADICH
#define CADICH7_REG          CADICH

/* CADICL */
#define CADICL0_REG          CADICL
#define CADICL1_REG          CADICL
#define CADICL2_REG          CADICL
#define CADICL3_REG          CADICL
#define CADICL4_REG          CADICL
#define CADICL5_REG          CADICL
#define CADICL6_REG          CADICL
#define CADICL7_REG          CADICL

/* OSICSR */
#define OSIEN_REG            OSICSR
#define OSIST_REG            OSICSR
#define OSISEL0_REG          OSICSR

/* SPMCSR */
#define SPMEN_REG            SPMCSR
#define PGERS_REG            SPMCSR
#define PGWRT_REG            SPMCSR
#define LBSET_REG            SPMCSR
#define RWWSRE_REG           SPMCSR
#define SIGRD_REG            SPMCSR
#define RWWSB_REG            SPMCSR
#define SPMIE_REG            SPMCSR

/* PORTB */
#define PORTB0_REG           PORTB
#define PORTB1_REG           PORTB
#define PORTB2_REG           PORTB
#define PORTB3_REG           PORTB
#define PORTB4_REG           PORTB
#define PORTB5_REG           PORTB
#define PORTB6_REG           PORTB
#define PORTB7_REG           PORTB

/* CHGDCSR */
#define CHGDIE_REG           CHGDCSR
#define CHGDIF_REG           CHGDCSR
#define CHGDISC0_REG         CHGDCSR
#define CHGDISC1_REG         CHGDCSR
#define BATTPVL_REG          CHGDCSR

/* TIMSK0 */
#define TOIE0_REG            TIMSK0
#define OCIE0A_REG           TIMSK0
#define OCIE0B_REG           TIMSK0
#define ICIE0_REG            TIMSK0

/* TIMSK1 */
#define TOIE1_REG            TIMSK1
#define OCIE1A_REG           TIMSK1
#define OCIE1B_REG           TIMSK1
#define ICIE1_REG            TIMSK1

/* BGCCR */
#define BGCC0_REG            BGCCR
#define BGCC1_REG            BGCCR
#define BGCC2_REG            BGCCR
#define BGCC3_REG            BGCCR
#define BGCC4_REG            BGCCR
#define BGCC5_REG            BGCCR

/* PCMSK0 */
#define PCINT0_REG           PCMSK0
#define PCINT1_REG           PCMSK0
#define PCINT2_REG           PCMSK0
#define PCINT3_REG           PCMSK0

/* PCMSK1 */
#define PCINT4_REG           PCMSK1
#define PCINT5_REG           PCMSK1
#define PCINT6_REG           PCMSK1
#define PCINT7_REG           PCMSK1
#define PCINT8_REG           PCMSK1
#define PCINT9_REG           PCMSK1
#define PCINT10_REG          PCMSK1
#define PCINT11_REG          PCMSK1

/* PINC */
#define PINC0_REG            PINC
#define PINC1_REG            PINC
#define PINC2_REG            PINC
#define PINC3_REG            PINC
#define PINC4_REG            PINC

/* PINB */
#define PINB0_REG            PINB
#define PINB1_REG            PINB
#define PINB2_REG            PINB
#define PINB3_REG            PINB
#define PINB4_REG            PINB
#define PINB5_REG            PINB
#define PINB6_REG            PINB
#define PINB7_REG            PINB

/* EIFR */
#define INTF0_REG            EIFR
#define INTF1_REG            EIFR
#define INTF2_REG            EIFR
#define INTF3_REG            EIFR

/* BGCSR */
#define BGSCDIE_REG          BGCSR
#define BGSCDIF_REG          BGCSR
#define BGSCDE_REG           BGCSR
#define BGD_REG              BGCSR

/* TWAMR */
#define TWAM0_REG            TWAMR
#define TWAM1_REG            TWAMR
#define TWAM2_REG            TWAMR
#define TWAM3_REG            TWAMR
#define TWAM4_REG            TWAMR
#define TWAM5_REG            TWAMR
#define TWAM6_REG            TWAMR

/* TIFR0 */
#define TOV0_REG             TIFR0
#define OCF0A_REG            TIFR0
#define OCF0B_REG            TIFR0
#define ICF0_REG             TIFR0

/* pins mapping */











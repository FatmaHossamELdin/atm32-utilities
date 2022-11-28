/*
 * registers.h
 *
 * Created: 02/11/2022 11:25:24 PM
 *  Author: mac
 */ 


#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "data_types.h"


/************************************************************************/
/* DIO registers                                                                     */
/************************************************************************/
//PORTA resisters
#define PORTA *((volatile uint8_t*)0x3B) // 8bit register
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)


//PORTB resisters
#define PORTB *((volatile uint8_t*)0x38) // 8bit register
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)

//PORTC resisters
#define PORTC *((volatile uint8_t*)0x35) // 8bit register
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)

//PORTD resisters
#define PORTD *((volatile uint8_t*)0x32) // 8bit register
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)


/************************************************************************/
/* Timer registers                                                                     */
/************************************************************************/
#define TIFR *((volatile uint8_t*)0x58)
#define TIMSK *((volatile uint8_t*)0x59)

//Timer0 registers
#define TCCR0 *((volatile uint8_t*)0x53) 
#define TCNT0 *((volatile uint8_t*)0x52)
#define OCR0 *((volatile uint8_t*)0x5C)

/************************************************************************/
/* interrupt registers                                                                     */
/************************************************************************/
#define SREG *((volatile uint8_t*)0x5F) 
#define GICR *((volatile uint8_t*)0x5B) 
#define GIFR *((volatile uint8_t*)0x5A) 
#define MCUCR *((volatile uint8_t*)0x55)
#define MCUCSR *((volatile uint8_t*)0x54)

/************************************************************************/
/* ADC registers                                                                     */
/************************************************************************/
#define ADMUX *((volatile uint8_t*)0x27) 
#define ADCSRA *((volatile uint8_t*)0x26) 
#define ADCH *((volatile uint8_t*)0x25) 
#define ADCL *((volatile uint8_t*)0x24) 


#endif /* REGISTERS_H_ */
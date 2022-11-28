/*
 * bit_manipulation.h
 *
 * Created: 03/11/2022 12:56:58 AM
 *  Author: mac
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_

#define SET_BIT(portNumber, bitNumber)		(portNumber |= (1<<bitNumber))
#define CLEAR_BIT(portNumber, bitNumber)	(portNumber &= (~(1<<bitNumber)))
#define TOGGLE_BIT(portNumber, bitNumber)	(portNumber ^= (1<<bitNumber))		
#define GET_BIT(portNumber, bitNumber)		((portNumber>>bitNumber) & 0x01)		


#endif /* BIT_MANIPULATION_H_ */
/*	Author: achau020
 *  Partner(s) Name: 
 *	Lab Section: 21
 *	Assignment: Lab 3  Exercise 2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpB = 0x00;
        unsigned char tmpC = 0x00;
	unsigned char tmpA = 0x00;
    /* Insert your solution below */
    while (1) {
	/*A7 = B3
 	  A6 = B2
	  A5 = B1
	  A4 = B0
	
	  A3 = C7
	  A2 = C6
	  A1 = C5
	  A0 = C4
	*/

	tmpA = PINA;

	tmpB = tmpA;
	tmpB = tmpB >> 4;
	tmpB = tmpB & 0x0F;

	tmpC = tmpA;	
	tmpC = tmpC << 4;
	tmpC = tmpC & 0xF0;	

	PORTB = tmpB;
	PORTC = tmpC;
    }
    return 1;
}

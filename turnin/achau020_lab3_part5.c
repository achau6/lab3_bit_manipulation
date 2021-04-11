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
	DDRD = 0x00; PORTD = 0xFF;
        DDRB = 0xFF; PORTB = 0x00;

	unsigned char tmpB = 0x00;

	unsigned char tmpD = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpD = PIND;
	if(tmpD >= 0x46) {
		tmpB = 0x04;
	} else if(tmpD > 0x05 && tmpD < 0x46) {
		tmpB = 0x02;
	} else if (tmpD <= 0x05) {
		tmpB = 0x00;
	} else {
		tmpB = 0xFF;
	}
	PORTB = tmpB;
    }
    return 1;
}

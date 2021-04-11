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
        DDRB = 0x00; PORTB = 0xFF;
        DDRC = 0xFF; PORTC = 0x00;

	unsigned char tmpA = 0x00;
	unsigned char tmpB = 0x00;
	unsigned char tmpC = 0x00;
    /* Insert your solution below */
    while (1) {
	unsigned int count = 0;
	tmpA = PINA;
	tmpB = PINB;
	while(tmpA != 0){
		count += tmpA & 0x01;
		tmpA = tmpA >> 1;
	}

	while(tmpB != 0){
                count += tmpB & 0x01;
                tmpB = tmpB >> 1;
        }
	tmpC = count;
	PORTC = tmpC;
    }
    return 1;
}

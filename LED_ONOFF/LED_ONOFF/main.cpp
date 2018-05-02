/*
 * LED_ONOFF.cpp
 *
 * Created: 2018-05-02 오전 10:52:07
 * Author : stc_151
 */ 


#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD= 0xff; 
	PORTD = 0xff;
   
    while (1) 
    {
		PORTD= 0x00;
		_delay_ms(500);
		PORTD= 0xff;
		_delay_ms(500);
    }
}


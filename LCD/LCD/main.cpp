#define F_CPU	16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "LCD.h"

int main(void)
{
	
	int num=0;
	char buffer[20];
	LCD mylcd;
	
	mylcd.LCD_write_string("hello world");
	
	while (1)
	{
		
	/*	sprintf(buffer, "count:%04d",num);
		mylcd.LCD_goto_XY(1,0);
		mylcd.LCD_write_string(buffer);
		_delay_ms(300);
		num++; */
	}
}
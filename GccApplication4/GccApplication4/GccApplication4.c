#define F_CPU 8000000
#include<avr/io.h>
#include<util/delay.h>

void main()
{
	DDRD=0xff;
	DDRB=0xf0;
	
	while(1)  
	{
		unsigned char a=0,b=0,c=0;

		c=PINB & 0x03;

		switch(c)
		{
			case 0x00:
			PORTD=0x00; 
			break;

			case 0x01:
			PORTD=0x01; 
			break;

			case 0x02:
			PORTD=0x04;  
			break;

			case 0x03:
			PORTD=0x05;  
			break;
		}
	}
}

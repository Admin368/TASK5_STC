//Place paulo.h in Keil\C51\INC //where header files are
#include <reg52.h>
#include <paulo.h>
#define uchar unsigned char



int t;
t = 1;
on = 1;
off = 0;
//declaire fuctions//
void countdown();
void countgreen();
void countred();
void countyellow();
void countwhite();


void main()
	{
		while(1)
			{
			  P1 = ledalloff;
				buzzer = off;
				seconds(1);
				countred();
				countyellow();
				P1 = green;
				countdown();
				P1 = ledalloff;
				countyellow();
			}
	}


void countgreen()
	{
	segment1();
	P1 = green;
	digit5();
	seconds(1);
	digit4();
	seconds(1);
	digit3();
	seconds(1);
	digit2();
	seconds(1);
	digit1();
	seconds(1);
	digit0();
	seconds(1);
	}
void countred()
	{
	segment1();	
	P1 = red;
	digit5();
	seconds(1);
	digit4();
	seconds(1);
	digit3();
	seconds(1);
	digit2();
	seconds(1);
	digit1();
	seconds(1);
	digit0();
	seconds(1);
	}	
void countyellow()
	{
	segment1();
	P1 = yellow;
	digit2();
	seconds(1);
	digit1();
	seconds(1);
	digit0();
	seconds(1);
	}
void countwhite()
	{
	segment1();
	P1 = white;
	digit5();
	seconds(1);
	digit4();
	seconds(1);
	digit3();
	seconds(1);
	digit2();
	seconds(1);
	digit1();
	seconds(1);
	digit0();
	seconds(1);
	}	
void countdown()
{
		segment1();
		//segment1();
		digit0();
		buzzer = on;
		seconds(2);
		buzzer = off;
		delay (1000);
	  
		//9
		//segment1();
		digit9();
		beep();
		seconds(1);
		
		//8
		//segment1();
		digit8();
		beep();
		seconds(1);
		
		//7
		//segment1();
		digit7();
		beep();
		seconds(1);
		
		//6
		//segment1();
		digit6();
		beep();
		seconds(1);
		
		//5
		//segment1();
		digit5();
		beep();
		seconds(1);
		
		//4
		//segment1();
		digit4();
		beep();
		seconds(1);

		//3
		//segment1();
		digit3();
		beep();
		seconds(1);
		
		//2
		//segment1();
		digit2();
		beep();
		seconds(1);
		
		//1
		//segment1();
		digit1();
		beep();
		seconds(1);
}





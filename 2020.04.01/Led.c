#include <reg52.h>
#define uchar unsigned char
uchar i,j,h;
sbit ledx = P1^i;

int g,b,t;
t = 1000;
// single LEDS //
led1 = 0xfe;
led2 = 0xfd;
led3 = 0xfb;
led4 = 0xf7;
led5 = 0xef;
led6 = 0xdf;
led7 = 0xbf;
led8 = 0x7f;
// multiple LEDs //
ledallon = 0x00;
ledalloff = 0xff;
halfon1 = 0x0f;
halfon2 = 0xf0;


void ledswap();
void delay(uchar x);
void main()
{

	while(1)
	{	
		
		ledx = 1;
		delay(t);
		ledx = 0;
		delay(t);
	}
}

void delay(uchar x)
{
	for (i=0;i<x;i++)
	{
		for (j=0;j<120;j++){}
	}
}

void ledswap()
{
	for (s=0;s<9;s++)
	{
		

	}
}

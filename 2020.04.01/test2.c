#include <reg52.h>
#define uchar unsigned char
uchar i,j,h,t;
int g,b;
//t = 1000;
// single LEDS //
o = 0xfe;
p = 0xfd;
q = 0xfb;
r = 0xf7;
s = 0xef;
led6 = 0xdf;
led7 = 0xbf;
led8 = 0x7f;
// multiple LEDs //
ledallon = 0x00;
ledalloff = 0xff;
halfon1 = 0x0f;
halfon2 = 0xf0;


void delay(uchar x);
void main()
{

	while(1)
	{	
		for (t=o;t<s;t++)
		{
		delay(1000);
		P1 = t;
		delay (1000);
		}
	}
}


void delay(uchar x)
{
	for (i=0;i<x;i++)
	{
		for (j=0;j<120;j++){}
	}
}

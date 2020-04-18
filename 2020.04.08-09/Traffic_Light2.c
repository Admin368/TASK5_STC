#include <reg52.h>
#define uchar unsigned char
sbit buzzer = P2^0;
uchar i,j,y,x,d,a;
int t;
t = 1000;
//Segments
sbit digdef = P2^6; //digit define "0" for open , "1" for close
sbit segdef = P2^7; //Segment define "0" for open , "1" for close
//segment_def //selected when 1
// available pins
sbit seg1 = P0^0;
sbit seg2 = P0^1;
sbit seg3 = P0^2;
sbit seg4 = P0^3;
sbit seg5 = P0^4;
sbit seg6 = P0^5;
segall = P0;

dig1 = 0x06;
dig2 = 0x7f;
/*
dig3 =
dig4 =
dig5 =
dif6 =
dif7 =
dif8 =
dif9 = 
dif0 =
*/

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


void delay(uchar x);
//void digit1();
//void countdown(uchar d);
void main()
{
		buzzer = 0;
		segdef = 1;
		seg6 = 0;
		segdef = 0;
		digdef = 1;
		P0 = dig1;
		digdef = 0;
	while(1)
	{

		P1 = ledalloff;
		delay(t);
		buzzer = 1;
		P1 = ledallon;
		P0 = dig1;
		delay(t);
	}
}
void delay(uchar x)
{
	for (i=0;i<x;i++){
		for (y=0;y<120;y++){}
		}
}

/*
void countdown(uchar d)
{
	for (a=0;a<d;a++){
	if(a=1){void digit1();}
	}
}

*/
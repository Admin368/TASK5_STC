#include <reg52.h>
#include <paulo.h>
#define uchar unsigned char
sbit buzzer = P2^0;
uchar i,j,y,x,d,a;
int t;
t = 1000;



void delay(uchar x);
//void digit1();
//void countdown(uchar d);
void main()
{
	segdef = 1;
		seg1 = 0;
	segdef = 0;
	
// digdef = 1;
		P0 = dig2;
// digdef = 0;
	while(1)
	{
		buzzer = 0;
		P1 = ledalloff;
		delay(t);
		buzzer = 1;
		P1 = ledallon;
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
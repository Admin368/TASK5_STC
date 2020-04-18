#include <reg52.h>
//#include <paulo.h>
#include <intrins.h>
#define uchar unsigned char
sbit seglock = P2^7;
sbit diglock = P2^6;
sbit soundbeep = P2^0;
sbit key1 = P3^4;
sbit key2 = P3^5;
sbit key3 = P3^6;
sbit key4 = P3^7;

void alarm();
void delayms();
void seconds(uchar mm);
//void timer(uchar bx, uchar by);
//void selectx();
//void selecty();
void main()
{
	while(1)
		{
			alarm();
	  }
}

void alarm()
{
	uchar defalarm = 1;
	while(defalarm == 1)
		{
			while(key1 == 1)
			{
				soundbeep = 0;
				seconds(1);
			}
			defalarm = 0;
		}
}
//void timer(uchar bx, uchar by){}
//void selectx(){}
//void selecty(){}

void seconds(uchar mm)
{
    unsigned char mmm;
	for (mmm=0;mmm<mm+1;mmm++)
	{
			delayms();
	}
}

void delayms()
{
	unsigned char ii, jj, kk;

	_nop_();
	_nop_();
	ii = 5;
	jj = 52;
	kk = 195;
	do
	{
		do
		{
			while (--kk);
		} while (--jj);
	} while (--ii);
}




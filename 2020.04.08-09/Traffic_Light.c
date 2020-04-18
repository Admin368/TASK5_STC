#include <reg52.h>
#define uchar unsigned char
buzzer = P2^0;

void main()
{
	while(1)
	{
		buzzer = 0;
	}
}




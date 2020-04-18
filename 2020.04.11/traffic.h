#include <reg52.h>
sbit segdef = P2^7;
sbit digdef = P2^6;
sbit seg1 = P0^0;


void main()
{
//select segement
			segdef = 1; //open latch
			seg1 = 0; // select segment
			segdef = 0; // close latch
	while(1)
	{
  			//write digit
			digdef = 1; // open latch
			P0 = 0x5b; //write digit
			digdef = 0; // close latch
	}
}

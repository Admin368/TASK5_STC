#include <reg52.h>
#include <paulo.h>

void main()
{
 while(1)
 {
	segdef = 1;
	segment1();
	segdef = 0;
	delay(100);
	digdef = 1;
	digit1();
	digdef = 0;
	 
	delay(100);
	 
	segdef = 1;
	segment2();
	segdef = 0;
	delay(100);
	digdef = 1;
	digit0();
	digdef = 0;
	delay(100);
 }
}

#include <reg52.h>
#include "paulobeta.c"
#define uchar unsigned char
	
uchar columnCheck = 0xf0;
uchar rowCheck = 0x0f;
uchar digitx,digity,ans;


void getkey();
void main();
{
 while(1)
				{
					seg(1);
					dig(1);
				}
}


void getkey()
{
							switch(key)
							{
								case 0xee:									
								  P1 = key;  // light LED
									digit = 1;
									break;
								case 0xde:									
								  P1 = key;  // light LED
									digit = 2;
									break;								
								case 0xbe:									
								  P1 = key;  // light LED
								  digit = 3;
									break;								
								case 0x7e:									
								  P1 = key;  // light LED
								digit = 4;	
								break;
								case 0xed:									
								  P1 = key;  // light LED
								digit = 5;	
								break;
								case 0xdd:									
								  P1 = key;  // light LED
								digit = 6;	
								break;								
								case 0xbd:									
								  P1 = key;  // light LED
								digit = 7;	
								break;								
								case 0x7d:									
								  P1 = key;  // light LED
								digit = 8;	
								break;									
								case 0xeb:									
								  P1 = key;  // light LED
								digit = 9;	
								break;
								case 0xdb:									
								  P1 = key;  // light LED
								digit = 0;	
								break;								
								case 0xbb:									
								  P1 = key;  // light LED
									break;								
								case 0x7b:									
								  P1 = key;  // light LED
									break;
								case 0xe7:									
								  P1 = key;  // light LED
									break;
								case 0xd7:									
								  P1 = key;  // light LED
									break;								
								case 0xb7:									
								  P1 = key;  // light LED
									break;								
								case 0x77:									
								  P1 = key;  // light LED
									break;								
								default:
									P1 = 0xff;// turn off
									digit =0;
									
							}
							return digit;
}
#include <reg52.h>
#include "paulobeta.c"
#define uchar unsigned char
	
//uchar columnCheck = 0xf0;
//uchar rowCheck = 0x0f;
uchar xdigit,digitx,xdigity,ans;

void changestate();
void getkey();
void main(){
while (1)
	{
		segment(1);
		digit(1);
	}
}


void changestate(){
uchar paul = 1;
}
void getkey()
{
	if (P3 != 0)
		{while(P3 != 0)
						{
							uchar key = P3;
							switch(key)
							{
								case 0xee:									
								  P1 = key;  // light LED
									xdigit = 1;
									changestate();
									break;
								case 0xde:									
								  P1 = key;  // light LED
									xdigit = 2;
									changestate();
									break;								
								case 0xbe:									
								  P1 = key;  // light LED
								  xdigit = 3;
									changestate();
									break;								
								case 0x7e:									
								  P1 = key;  // light LED
									xdigit = 4;	
									changestate();
									break;
								case 0xed:									
								  P1 = key;  // light LED
									xdigit = 5;	
									changestate();
									break;
								case 0xdd:									
								  P1 = key;  // light LED
									xdigit = 6;	
									changestate();
									break;								
								case 0xbd:									
								  P1 = key;  // light LED
									xdigit = 7;	
									changestate();
									break;								
								case 0x7d:									
								  P1 = key;  // light LED
									xdigit = 8;	
									changestate();
									break;									
								case 0xeb:									
								  P1 = key;  // light LED
									xdigit = 9;	
									changestate();
									break;
								case 0xdb:									
								  P1 = key;  // light LED
									xdigit = 0;	
									changestate();
									break;								
								case 0xbb:									
								  P1 = key;  // light LED
									changestate();
									break;								
								case 0x7b:									
								  P1 = key;  // light LED
									changestate();
									break;
								case 0xe7:									
								  P1 = key;  // light LED
									changestate();
									break;
								case 0xd7:									
								  P1 = key;  // light LED
									changestate();
									break;								
								case 0xb7:									
								  P1 = key;  // light LED
									changestate();
									break;								
								case 0x77:									
								  P1 = key;  // light LED
									changestate();
									break;								
								default:
									P1 = 0xff;// turn off
									xdigit =0;
									
							}
						}
					}
}
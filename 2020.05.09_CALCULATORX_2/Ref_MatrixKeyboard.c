#include <reg52.h>
#include "paulobeta.c"
#define uchar unsigned char
	
uchar columnCheck = 0xf0;
uchar rowCheck = 0x0f;
uchar digitx,digity,ans;


void getkey();
void changestate();
void main();
{
uchar state = 0; //Digitx unselected
uchar digit = 0;
 while(1)
				{
					digitx = 0;
					while(state == 0;) //state0 Select digitx
							{
							 seg(1);	
							 dig(digitx);
							 getkey();
							}
					while(state == 1;)//state1 select modifier
							{
							seg(1)
							dig(digitx);
							delay(100);
							seg(2)
							}
					
				}
}

void changestate()
	{
		state = state+1;
		if (state == 3;) 
		{
			state == 0;
		}
	}
void getkey()
{
					                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     		switch(key)
							{
								case 0xee:									
								  P1 = key;  // light LED
									digit = 1;
									changestate();
									break;
								case 0xde:									
								  P1 = key;  // light LED
									digit = 2;
									changestate();
									break;								
								case 0xbe:									
								  P1 = key;  // light LED
								  digit = 3;
									changestate();
									break;								
								case 0x7e:									
								  P1 = key;  // light LED
									digit = 4;	
									changestate();
									break;
								case 0xed:									
								  P1 = key;  // light LED
									digit = 5;	
									changestate();
									break;
								case 0xdd:									
								  P1 = key;  // light LED
									digit = 6;	
									changestate();
									break;								
								case 0xbd:									
								  P1 = key;  // light LED
									digit = 7;	
									changestate();
									break;								
								case 0x7d:									
								  P1 = key;  // light LED
									digit = 8;	
									changestate();
									break;									
								case 0xeb:									
								  P1 = key;  // light LED
									digit = 9;	
									changestate();
									break;
								case 0xdb:									
								  P1 = key;  // light LED
									digit = 0;	
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
									digit =0;
									
							}
							return digit;
							if (state == 0){digitx = digit);
}
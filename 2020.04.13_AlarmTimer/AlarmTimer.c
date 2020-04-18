#include <reg52.h>
#include <paulobeta.h>
#define uchar unsigned char
sbit key1 = P3^4;
sbit key2 = P3^5;
sbit key3 = P3^6;
sbit key4 = P3^7;
int count=0;
uchar defalarm,selectxdone,sx,sx2,selectydone,sy,sy2,freq;
ndd = 170; //Number Display Delay
nsd = 120; //Number Select Delay

void alarm();
void selectx();
void selecty();
void showsx();
void showsy();

void main()
{
	defalarm = 0;
	soundbeep = 0;

	sx = 5;
	sy = 6;
	freq=50;
	selectx();
	while(1)
		{
			
			if(key4 == 0)
					{
						delay(100);
						defalarm = 1;
						alarm();
					}
	  }
}

void selectx()
	{
//		segment(1);
		selectxdone = 0;
		while (selectxdone == 0)
		{	
			count=count+1;
			if (count>10000000)
			{
				count=0;
			}
			if (count%freq==0)
			{
				showsx();
			}
									
				delay(1); // middle delay

				showsy();

				delay(1);
		}
	}
void showsx()
{
										segment(1);
									  digit(sx); //
										delay(5);
	
}

void showsy()
{
									segment(2);
	  							digit(sy);
									delay(5);
}
			/*			
						    	delay(ndd);
									segment(2);
									digit(sy);
									led(8);
									delay(ndd);
  								seconds(1);
*/
/*
									if (key3 == 0){selectxdone = 1;}
									while(key2 == 0)
									{
												segment(1);
												digit(sx);
												led(11);
												delay(nsd);
												sx2 = sx;
												sx = sx2+1;
												if (sx == 10){sx = 0;}
	//										seconds(1);											
									}
			}
//	selecty();
	led(10);
	seconds(5);
	}
*/	

void selecty()
	{
//		segment(1);
		selectydone = 0;
		while (selectydone == 0)
		{
									segment(1);
									digit(sy);
									led(11);
						    	delay(ndd);
									segment(0);
									led(0);
									delay(ndd);
	//							seconds(1);
									if (key3 == 0){selectydone = 1;}
									while(key2 == 0)
									{
												segment(1);
												digit(sy);
												led(11);
												delay(nsd);
												sy2 = sy;
												sy = sy2+1;
												if (sy == 10){sy = 0;}
	//										seconds(1);											
									}
			}
	selecty();
	}
	
void alarm()
{
	while(defalarm == 1)
		{
//			delay(400);
			while(key1 == 1)
			{
				soundbeep = 0;
				led(0);
				seconds(1);
				soundbeep = 1;
				led(11);
				seconds(1);
			}
			soundbeep = 0;
			led(0);
			defalarm = 0;
		}
}

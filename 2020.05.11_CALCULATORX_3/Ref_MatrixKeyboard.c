#include <reg52.h>

	
#define uchar unsigned char

sbit digdef = P2^6;
sbit segdef = P2^7;

uchar sevenSegData[] = {
0x3f ,
0x06 ,
0x5b ,
0x4f ,
0x66 ,
0x6d ,
0x7d ,
0x07 ,
0x7f ,
0x6f 

};              
							 
uchar columnCheck = 0xf0;
uchar rowCheck = 0x0f;
uchar digit;
uchar digit2;
uchar ans;
uchar segValue;
uchar chooseSeg;


uchar temp1, temp2, key;



uchar flag_o1=0; //flag operand 1
uchar flag_o2=1; //flag operand 2
uchar o1,o2,sol;

void delay(uchar x);   // to create time delays
uchar _getDigit(uchar key); 
void display7seg(uchar  _code);
 main()
{
	

	
	while(1)
	{
			P3 = columnCheck;
			if(P3 != columnCheck)
			{
					delay(10);
					if(P3 != columnCheck)
					{
							temp1 = ~columnCheck|P3; // checking column
							P3 = rowCheck;
							temp2 = ~rowCheck|P3;    // checking row
						  flag_o1=1;
							flag_o2=0;
							key = temp1&temp2;
							_getDigit(key);

							
 					}
					if (flag_o1==1 && flag_o2==0)
					{
							o1=digit;
						display7seg(digit);
						
						
					}
					if (flag_o2==1&&flag_o1==0)
					{
						o2=digit;
						flag_o1=0;
						flag_o2=0;
						display7seg(digit);
						
					}
					if (digit=='+')
					{
			
						flag_o1=0;
						flag_o2=1;
						
					}
					
					if(digit=='=')
					{
									sol=o1+o2;
						display7seg(sol);
								
						
					}	

				}
			}
		}
void delay(uchar x)
{
	uchar i=0;
	
	while(x--)
	{
			for(i =0; i<120; i++);
	}
	
}

uchar _getDigit(uchar key)
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
								digit='+';
									break;								
								case 0x77:									
								  P1 = key;  // light LED
								digit='=';	
								break;								
								default:
									P1 = 0xff;// turn off
									digit =0;
									
							}
							
							return digit;
}

void display7seg(uchar  _code)
{
		P0 = 0xfe;
		segdef = 1;
		segdef = 0;

		P0 = sevenSegData[_code];
		digdef = 1;
		digdef = 0;		
}
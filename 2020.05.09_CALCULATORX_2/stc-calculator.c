#include <reg52.h>
#include "paulobetax.h"
#define uchar unsigned char
	
sbit buzzer_ = P2^3;
//<Declaire_Variables>//
uchar state = 0;
uchar inputx = 4;
uchar inputy = 0;
uchar effector = '+';
uchar result = 0;

//<Declare_Functions>//
void getdigit();
void display();
void changestate();
void calculate();

//<Functions>/////////
void main(){
	buzzer_ = 1;
	P3 = 0xf0;
	while (1){
			//getdigit();
			//calculate();
			//display();
		
		if(P3!=0xf0)
		{
			buzzer_= 0;
			while(P3 != 0xf0);
			buzzer_ = 1;
		}
		
		
	}

}
void getdigit(){
	uchar button = 0;
	uchar input = 0;
	xled(01);
	if (P3 != 0xff){ 			//checking button press 
		
	
		while(P3 != 0xff){		//verifying button press 
			
			while(state==0){
				button = P3;
				switch(button){
								case 0xee:									
								  xled(11);
									input = 1;
									changestate();
									break;
								case 0xde:									
								  xled(11);
									input = 2;
									changestate();
									break;								
								case 0xbe:									
								  xled(11);
								  input = 3;
									changestate();
									break;								
								case 0x7e:									
								  xled(11);
									input = 4;	
									changestate();
									break;
								case 0xed:									
								 	xled(11);
									input = 5;	
									changestate();
									break;
								case 0xdd:									
								  xled(11);
									input = 6;	
									changestate();
									break;								
								case 0xbd:									
								  xled(11);
									input = 7;	
									changestate();
									break;								
								case 0x7d:									
								  xled(11);
									input = 8;	
									changestate();
									break;									
								case 0xeb:									
								  xled(11);
									input = 9;	
									changestate();
									break;
								case 0xdb:									
								  xled(11);
									input = 0;	
									changestate();
									break;								
								case 0xbb:									
								  	xled(11);
									changestate();
									break;								
								case 0x7b:									
								  	xled(11);
									changestate();
									break;
								case 0xe7:									
								  	xled(11);
									changestate();
									break;
								case 0xd7:									
								  	xled(11);
									changestate();
									break;								
								case 0xb7:									
								  	xled(11);
									changestate();
									break;								
								case 0x77:									
								  	xled(11);
									changestate();
									break;								
								default:
									P1 = 0xff;// turn off
									input =0;
									
							}
			}
		}
		if (state == 0){inputx = input;}
		if (state == 2){inputy = input;}
	}
	P3 = 0xff;
		//
}
void display(){
	while (state==0){
//	while ((state==0) || (state==2)){
		xsegment(1);
		xdigit(inputx);
/*
		xdelay(10);
		xsegment(6);
		xdigit(inputy);
		xdelay(10);
*/
	}
}
void changestate(){
	state = state+1;
	if (state==4){state = 0;}
}
void calculate(){
	while(state==3){
		break;
		}
}
#include <reg52.h>	
#include "..\_OwnMadeStcHeaderFiles\paulobetax4.c"
#define uchar unsigned char
uchar state = 0;
uchar inputx = 0;
uchar inputy = 0;
uchar effector = 0;
uchar result = 0;
uchar changestateto = x;
uchar clock = 0;
uchar clocklimit = 10000;
uchar sleep = 0;

void getdigit();
void display();
void changestate();
void calculate();
void main(){
while(1){
for (clock=0;clock<clocklimit;clock++){
			display();
			getdigit();
			changestate();
			calculate();
			if(clock%2000==0){sleep = ~sleep}
		}	
	}
}
void getdigit(){
	switch(state)
	{
		case 1: // get inputx // operand1
			xgetfullkey();
			if (xkey>0){
				inputx = xkey;
				changestateto = 2;
				xresetkey();
				break;
				}
			break;
		case 2: // get effector
			xgetfullkey();
			if (xkey>0){
				xgeteffector = yes;
				xgetfullkey();
				changestateto = 3;
				xresetkey();
				break;
				} 
			break;			
		case 3: // get inputy // operand2
			xgetfullkey();
			if (xkey>0){
				inputy = xkey;
				changestateto = 4;
				xresetkey();
				calculate();
				break;
				}
			break;
		case 4:
			xgetfullkey();
			calculate();
			break();
		case 4:
		default:
			xkey = 0;
	}
}

void display(){

	switch(state){
		case 0:
			xsegment(11);
			if(sleep==0){xdisplay(0);}
			if(sleep==1){xdisplay(n);}
			break;
		case 1:
			if(clocklimit%clock);
			xsegment(1);
			if(sleep==0){xdisplay(inputx);}
			if(sleep==1){xdisplay(n);}
			xsegment(6);
			xdisplay(inputy;)
			break;
		case 2:
			if(sleep==0){xdisplay();}
			if(sleep==1){xdisplay(n);}
			break;
		case 3:
			if(sleep==0){xdisplay();}
			if(sleep==1){xdisplay(n);}		
			break;
		case 4:
			if(sleep==0){xdisplay();}
			if(sleep==1){xdisplay(n);}		
			break;
		default:
	}
	xled(state); // shows state
}

void changestate(){
	swicth(changestateto){
		case 0:
			state = 0;
			break;
		case 1:
			state = 1;
			break;
		case 2:
			state = 2;
			break;
		case 3:
			state = 3;
			break;
		case 4:
			state = 4;
			break;
		default:
	}
	changestateto = x;
}

void calculate(){
	if(state)
	switch(effector)
		case e1: // addition +
			result = inputx + inputy;
			break;
		case e2: // subtraction -
			result = inputx - inputy;
			break;
		case e3: // division /
			result = inputx / inputy;
			break;
		case e4: // multiplication *
			result = inputx * inputy;
			break;
		case e5: // get result
		default:
	state = 4;
	return result;
}

void idle(){

}

void crash(){}

/*
state0>selecting inputx
state1>selecting effector
state2>selecting inputy
state3>showing result
state4>Reserved
*/
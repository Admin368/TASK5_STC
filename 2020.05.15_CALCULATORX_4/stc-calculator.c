#include <reg52.h>	
#include "..\_OwnMadeStcHeaderFiles\paulobetax4.c"
#define uchar unsigned char
uchar state = 0; // 0 is idle state
uchar maxstate = 7; // last state is error state
uchar error = 7;
uchar inputx = 0;
uchar inputy = 0;
uchar effector = 0;
int preresult;
int result[5];
//int split[6];
int unsplit;
uchar clock = 0;
uchar clocklimit = 100000;
uchar sleep = 0;

uchar splitlimit = 4; // dont count 0;
int split[4+1];

void getdigit();
void display();
void changestate(uchar cs);
int calculate();
void splitresult();
void autostate();
int xspliter();
void main(){
while(1){
for (clock=0;clock<clocklimit;clock++){
			getdigit();
			calculate();
			splitresult();
			display();
			autostate();
			if(clock%20==0){sleep = ~sleep;}
		}	
	}
}
void getdigit(){
	xgetfullkey();
	switch(state)
	{
		case 0:
			//xgetfullkey();
			if(xkey>0){
			changestate(1);
			}
			break;
		case 1: // get inputx // operand1
			//xgetfullkey();
			if (xkey>0){
				inputx = xkey;
				//changestate(2);
				xresetkey();
				break;
				}
			break;
		case 2: // get effector
			xgetfullkey();
			if (xkey>0){
				//xgeteffector = 1; // 1 for yes as uchar "yes" had errors
				//xgetfullkey();
				//changestate(3);
				xgeteffector();
				effector = xeffector;
				xresetkey();
				break;
				} 
			break;			
		case 3: // get inputy // operand2
			xgetfullkey();
			if (xkey>0){
				inputy = xkey;
				//changestate(4);
				//changestateto = 4;
				xresetkey();
				//calculate();
				break;
				}
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			xkey = 0;
			state = 0;
	}
}

int calculate(){
	if(state==4){
	  int intx = inputx;
    int inty = inputy;
		switch(effector){
			case 1: // addition +
				preresult = intx + inty;
				break;
			case 2: // subtraction -
				preresult = intx - inty;
				break;
			case 3: // division /
				preresult = intx / inty;
				break;
			case 4: // multiplication *
				preresult = intx * inty;
				break;
			case 5: // get result
			default:
				state = 4;
		}
	}
	if(preresult>0){changestate(5);}
	return preresult;
}

void splitresult(){
if(state==5){
	uchar ss;
	unsplit = preresult;
	xspliter();
	for(ss>0;ss<=4;ss++){
		result[ss] = split[ss];
	}
	preresult = 0;
	changestate(6);
}
}

void display(){
	uchar ds;
	switch(state){
		case 0: // Reserved
			xsegment(11); 
			if(sleep==0){xdisplay(0);}
			//if(sleep==255){xdisplay('n');}
			break;
		case 1: // selecting inputx
			xsegment(1);
			if(sleep==0){xdisplay(inputx);}
			if(sleep==255){xdisplay('n');}
			xsegment(6);
			xdisplay(inputy);
			break;
		case 2: // selecting effector
			if(sleep==0){
				xsegment(4);
				xdisplay(effector);
				xsegment(5);
				xdisplay(effector);
				}
			if(sleep==255){xdisplay('n');}
			break;
		case 3: // selecting inputy
			xsegment(6);
			if(sleep==0){xdisplay(inputy);}
			if(sleep==255){xdisplay('n');}		
			xsegment(1);
			xdisplay(inputx);
			break;
		case 4: // calculating
			xsegment(11);
			if(sleep==0){xdisplay(0);}
			if(sleep==255){xdisplay('n');}		
			break;
		case 5: // spliting result
			break;
		case 6: // showing result
			//uchar ds;
			for(ds=6;ds>=3;ds--){
				xsegment(ds);
				xdisplay(result[ds]);
			}
			//if(sleep==0){xdisplay();}
			//if(sleep==1){xdisplay('n');}		
			break;			
		case 7: // error
			xsegment(11);
			if(sleep==0){xdisplay(1);}
			if(sleep==255){xdisplay('n');}		
			break;
		default:
			changestate(error);
	}
	xled(state); // shows state
}

void autostate(){
	xgetfullkey();
	if(xkey==10){
			state = state+1;
			if(state>=maxstate){state = 0;}
			//if(state=0){state = 1;}
			// shuld >= as last state is error
			// and user shuldnt push themself there
			//xkey = 0;
	}
}


void changestate(uchar cs){
	switch(cs){
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
		case 5:
			state = 5;
			break;
		case 6:
			state = 6;
			break;
		case 7:
			state = 7;
		default:
			state = 0;
	}
//	changestateto = x;
}


int xspliter(){
	int limit = splitlimit;
    for(limit=limit;limit>0;limit--){
        int remender = unsplit%10;
        split[limit] = remender;
        unsplit = unsplit/10;
}
return split;
}
/*
state0>selecting inputx
state1>selecting effector
state2>selecting inputy
state3>showing result
state4>Reserved
*/
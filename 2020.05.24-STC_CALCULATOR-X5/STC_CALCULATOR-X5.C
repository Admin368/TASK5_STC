#include <reg52.h>
#include "..\_OwnMadeStcHeaderFiles\paulobetaX5.c"
#define uchar unsigned char
void main(){
	//unsplit=0;
	uchar place;
	uchar lmt;
	int xi;
	uchar lastkey = 0;
	for(place=1;place<=6;place++){
		split[place] = 0;
	}	
while(1){
	for(place=6;place>=1;place--){
		//int lastkey = 0;
	  //for(lmt=1;lmt<=6;lmt++){
		xgetfullkey();
		while(xnewkey==6){
				xgetfullkey();
				for(xi=1;xi<7;xi++){//display
					//xsegment(xi);
					xdisplay(split[xi]);
					xsegment(xi);
				}
			}
			while(xnewkey==1){
				//lastkey = xkey;
				xgetfullkey();
				for(xi=1;xi<7;xi++){//display
					//xsegment(xi);
					//xgetfullkey();
					xdisplay(split[xi]);
					xsegment(xi);
				  //xreset();
					//split[place] = lastkey;
					}
			//unsplit = lastkey;
			//xspliter(unsplit);
			//xresetkey();
				lastkey = xkey;
				split[place] = lastkey;
				}
			//split[place] = lastkey;
	}
}
}
	
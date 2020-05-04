//VARAIBLE_SELECT>>START
#include <intrins.h>
#include <reg52.h>
#define uchar unsigned char
uchar xx,k,dt,pla;
sbit seglock = P2^7;
sbit diglock = P2^6;
sbit soundbeep = P2^0;
sbit buzzer = P2^0;
segdelay = 10;
digdelay = 10;
levelsdelay= 600;
sbit digdef = P2^6;
sbit segdef = P2^7;

/*
segnone = 0xff;
seg1 = 0xfe;
seg2 = 0xfd;
seg3 = 0xfb;
seg4 = 0xf7;
seg5 = 0xef;
seg6 = 0xdf;
segall = 0x00;
dig1 = 0x06;
dig2 = 0x5b;
dig3 = 0x4f;
dig4 = 0x66;
dig5 = 0x6d;
dig6 = 0x7d;
dig7 = 0x07;
dig8 = 0x7f;
dig9 = 0x6f;
dig0 = 0x3f;
*/

led1 = 0xfe;
led2 = 0xfd;
led3 = 0xfb;
led4 = 0xf7;
led5 = 0xef;
led6 = 0xdf;
led7 = 0xbf;
led8 = 0x7f;
ledallon = 0x00;
ledalloff = 0xff;
halfon1 = 0x0f;
halfon2 = 0xf0;
level8 = 0x00;
level7 = 0x01;
level6 = 0x03;
level5 = 0x07;
level4 = 0x0f;
level3 = 0x1f;
level2 = 0x3f;
level1 = 0x7f;
level0 = 0xff;
red = 0xfc;
green = 0xf3;
yellow = 0xcf;
white = 0x3f;
//VARAIBLE_SELECT>>END

//FUNCTION_CLAIM>>START
void levels(uchar lvl);
void levelauto();
void levelsauto();
void led(uchar ld);
void xsegment(uchar xseg);
void digit(uchar dt);
void digit1();
void digit2();
void digit3();
void digit4();
void digit5();
void digit6();
void digit7();
void digit8();
void digit9();
void digit0();
void seconds(uchar mm);
void delayms();
void delay(uchar xx);
void beep();
//FUNCTION_CLAIM>>END

//FUNCTIONS_MAIN>>START

void led(uchar ld)
{   
        if (ld == 1){P1 = led1;}
        if (ld == 2){P1 = led2;}
        if (ld == 3){P1 = led3;}
        if (ld == 4){P1 = led4;}
        if (ld == 5){P1 = led5;}
        if (ld == 6){P1 = led6;}
        if (ld == 7){P1 = led7;}
        if (ld == 8){P1 = led8;}
        if (ld == 11){P1 = ledallon;}
        if (ld == 0){P1 = ledalloff;}
        if (ld == 00){P1 = ledalloff;}
        if (ld == 21){P1 = halfon1;}
        if (ld == 22){P1 = halfon2;}
}

void digit(uchar dt)
{   
        if (dt == 1){digit1();}
        if (dt == 2){digit2();}
        if (dt == 3){digit3();}
        if (dt == 4){digit4();}
        if (dt == 5){digit5();}
        if (dt == 6){digit6();}
        if (dt == 7){digit7();}
        if (dt == 8){digit8();}
        if (dt == 9){digit9();}
        if (dt == 0){digit0();}
}




void xsegment(uchar xseg)
{
switch(xseg)
		{
			case 0:
				P0 = 0xff; //segnone = 0xff;
				break;
			case 1:
				P0 = 0xfe; //seg1 = 0xfe;
				break;
			case 2:
				P0 = 0xfd; //seg2 = 0xfd;
				break;
			case 3:
				P0 = 0xfb; //seg3 = 0xfb;
				break;
			case 4:
				P0 = 0xf7; //seg4 = 0xf7;
				break;
			case 5:
				P0 = 0xef; //seg5 = 0xef;
				break;
			case 6:
				P0 = 0xdf; //seg6 = 0xdf;
				break;
            case 11:
                P0 = 0x00; // segall = 0x00;

			default:
				segdef = 0;
				return;
    }
delay(segdelay);
segdef = 1;
segdef = 0;
}

void xdigit(uchar xdig)
{
switch(xdig)
{
    case 0:
        P0 = 0x3f; //dig0 = 0x3f;
        break;
    case 1:
        P0 = 0x06; //dig1 = 0x06;
        break;
    case 2:
        P0 = 0x5b; //dig2 = 0x5b;
        break; 
    case 3:
        P0 = 0x4f; //dig3 = 0x4f;
        break;
    case 4:
        P0 = 0x66; //dig4 = 0x66;
        break;
    case 5:
        P0 = 0x6d; //dig5 = 0x6d;
        break;
    case 6:
        P0 = 0x7d; //dig6 = 0x7d;
        break;
    case 7:
        P0 = 0x07; //dig7 = 0x07;
        break;
    case 8:
        P0 = 0x7f; //dig8 = 0x7f;
        break;
    case 9:
        P0 = 0x6f; //dig9 = 0x6f;
        break;
    default:
        return;
}
}

void seconds(uchar mm)
{
  unsigned char mmm;
	for (mmm=0;mmm<mm+1;mmm++)
	{
			delayms();
	}
}
void delayms()
{
	unsigned char ii, jj, kk;

	_nop_();
	_nop_();
	ii = 5;
	jj = 52;
	kk = 195;
	do
	{
		do
		{
			while (--kk);
		} while (--jj);
	} while (--ii);
}
void beep(){
    buzzer = 1; // on
    delay(400);
    buzzer = 0;
}
void delay(uchar xx){
    unsigned char zx,xz;
    for (xz=0;xz<xx;xz++){
        for (zx=0;zx<120;zx++){}
    }
}
//FUNCTIONS_MAIN>>END


#include <stdio.h>
#include <stdlib.h>
#define uchar unsigned char
uchar disp;
void main(){
while(1){
printf("\n");
printf("------------------------------------\n");
int light = 'ooof';
if(light== 'n' ){printf("Light is on!\n");}
printf("Enter your version\n");
scanf("%u",&disp);
}
switch (disp){
    case 0:
        printf(" hi there is Version 0\n",disp);
        break;
    case 1:
        printf(" hi there is Version 1\n",disp);
        break;
    case 'n':
        printf(" Successfull \n",disp);
        break;
    default:
        printf("No Version Found");
        break;
}
printf("End of Loop Sir\n");
//return disp;
}

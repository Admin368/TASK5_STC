#include <stdio.h>
#include <stdlib.h>
#define uchar unsigned char
uchar in;
void main(){
while(1){
printf("\n");
printf("------------------------------------\n");
printf("enter the value to inverse\n");
scanf("%u",&in);
uchar ni = ~in;
printf("The inverse of '%u' is '%u'\n",in,ni);
}
}

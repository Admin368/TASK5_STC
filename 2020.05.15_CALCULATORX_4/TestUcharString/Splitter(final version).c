#include <stdio.h>
#include <stdlib.h>
#define uchar unsigned char

//uchar x;
// fix just make it int
uchar x,y;
int answer,remender;
int value(){
    printf("enter value of X\n");
    scanf("%u",&x);
    printf("enter value of Y\n");
    scanf("%u",&y);
    return x;

}
void main(){
while(1){
    //x=value();
    value();
    int ix = x;
    int iy = y;
    int xy = ix*iy;
    int max = 5;
    int tmax;
    int figure[max+1];
    for(tmax=max;tmax>0;tmax--){
        /*
        ######################## #
        # hey i got it the uchar #
        # can only store numbers #
        # from 0 to 255 (4 bits) #
        ##########################
        */
        //if(x==0){break;}
        remender = xy%10;
        printf("%d\n",xy);
        figure[tmax] = remender;
        xy = xy/10;
        printf("%d\n",xy);
        printf("the value of index %d is %d\n",tmax,remender);
    }
//if(x==0){break;}
uchar index;
    printf("The individual values are ");
for(index=1;index<=max;index++){
    printf("[%d]",figure[index]);
}
}
}

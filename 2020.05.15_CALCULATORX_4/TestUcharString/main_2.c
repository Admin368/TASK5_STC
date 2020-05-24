#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#define uchar unsigned char
int main()
{
    int inputx,inputy;
    int x,y,result;
    printf("Hello enter inputx\n");
    scanf("%d", &inputx);
    printf("Enter inputy\n");
    scanf("%d", &inputy);
    x = inputx;
    y = inputy;
    result=x+y;
    char xresult[2] = "%d", &result;
    printf("%s", xresult);
    return 0;
}

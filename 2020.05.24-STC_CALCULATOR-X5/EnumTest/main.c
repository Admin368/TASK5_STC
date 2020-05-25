#include <stdio.h>
#include <stdlib.h>

int main()
{
while(1){
    int password = 1234;
    //int input;
    enum answer{false, true};
    enum answer input;
    printf("--------------------------------\n");
    printf("Hello Enter 4 Digit Password !\n");
    scanf("%d",&input);
    printf("Printing Character = %d .\n",(int)true);
    printf("Printing Character = %d .\n",input);
    if(input==true){printf("Password Correct\n");}
    if(input==false){printf("WRONG TRY AGAIN\n");}
}
}

#include<stdio.h>
typedef unsigned int UINT;
// position 3 & 7

int main()
{
    UINT iNo=0;
    UINT iPos=0;
    UINT iResult=0;
    UINT iMask=0x00000044;
    
     printf("enter a number:");
     scanf("%d",&iNo);

     iResult=iNo ^ iMask;

     printf("updated number:%d\n",iResult);

    return 0;
}
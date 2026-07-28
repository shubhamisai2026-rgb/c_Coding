#include<stdio.h>
typedef unsigned int UINT;
//position 13
int main()
{
    UINT iNo=0; UINT iPos=0;
    UINT iMask=0xFFFFEFFF;
    printf("enter a number:");
    scanf("%d",&iNo);

    printf("enter a position:");
    scanf("%d",&iPos);

    iMask=iMask<<(iPos-1);

    iNo=iNo&iMask;

    printf("updated number is the:%d",iNo);



    return 0;
}
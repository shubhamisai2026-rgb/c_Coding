#include<stdio.h>
typedef unsigned int UINT;

UINT onbit(UINT no)
{
    UINT imask=0x0F;
    return imask | no;
}
int main()
{
    UINT no=0;
    printf("enter a your number:");
    scanf("%d",&no);
    UINT iRet=onbit(no);
    printf("the modified number is:%d",iRet);
    return 0;
}
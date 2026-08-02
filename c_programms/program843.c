#include<stdio.h>
typedef unsigned int UINT;
UINT offBit(UINT no)
{
    UINT iMask=~(1<<6);
    int value=0;
    value=(no & iMask);
    return value;
}
int main()
{
    UINT iValue=0;
    UINT iRet=0;

    printf("enter number:");
    scanf("%u",&iValue);

    iRet=offBit(iValue);
    printf("the modified number is:%d",iRet);

    return 0;
}
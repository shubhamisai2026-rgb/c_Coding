#include<stdio.h>
typedef unsigned int UINT;
UINT changenumber(UINT no)
{
    UINT imask=0;
    imask=(1<<6);
    UINT iValue=0;
    iValue=(no^imask);
    return iValue;
}
int main()
{
    UINT no=0;
    printf("enter a your number:");
    scanf("%d",&no);
    UINT iRet=0;
    iRet=changenumber(no);
    printf("the modified number is:%d",iRet);
    return 0;
}
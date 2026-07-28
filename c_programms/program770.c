#include<stdio.h>
typedef unsigned long int UINT;
UINT display(int no)
{
   static UINT mul=1;
    if(no!=0)
    {
        mul=mul*no;
        no--;
        display(no);
    }
    return mul;
}
int main()
{
    int iValue=0;
    printf("enter a number:");
    scanf("%d",&iValue);
    UINT iRet=0;
    iRet=display(iValue);
    printf("factorial:%lu",iRet);
    return 0;
}
#include<stdio.h>
int display(int no)
{
    int mul=1;
    while(no!=0)
    {
        mul=mul*no;
        no--;
    }
    return mul;
}
int main()
{
    int iValue=0;
    printf("enter a number:");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=display(iValue);
    printf("factorial:%d",iRet);
    return 0;
}
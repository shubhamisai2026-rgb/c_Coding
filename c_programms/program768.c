#include<stdio.h>
unsigned long int display(int no)
{
    unsigned long int mul=1;
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
    unsigned long int iRet=0;
    iRet=display(iValue);
    printf("factorial:%lu",iRet);
    return 0;
}
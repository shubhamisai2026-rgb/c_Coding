#include<stdio.h>
int display(int no)
{
    int i=0;int sum=0;
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int iValue=0;int iRet=0;
    printf("enter a your value:");
    scanf("%d",&iValue);
    iRet=display(iValue);
    printf("addition of the digits is:%d",iRet);
    return 0;
}
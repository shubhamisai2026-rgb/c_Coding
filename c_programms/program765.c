#include<stdio.h>
int display(int no)
{
    static int sum=0;
    if(no!=0)
    {
        sum=sum+no;
         no--;
         display(no);
    }
    return sum;
}
int main()
{
    int iValue=0;
    printf("enter a number:");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=display(iValue);
    printf("addition of the sum is:%d",iRet);
    return 0;
}
#include<stdio.h>
int display(int no)
{
    static int sum=0;
    static int i=1;
    if(i<=no)
    {
        sum=sum+i;
        i++;
        display(no);
    }
    return sum;
}

int main()
{
    int iValue=0;
    printf("enter a your value:");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=display(iValue);
    printf("sum of the digits is:%d",iRet);
    return 0;
}

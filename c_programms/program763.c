#include<stdio.h>
int display(int no)
{
    int i=1;
    int sum=0;
   while(i<=no)
   {
    sum=sum+i;
    i++;
   }
   return sum;
}
int main()
{
    int iValue=0;int iRet=0;
    printf("enter a value:");
    scanf("%d",&iValue);
    iRet=display(iValue);
    printf("addition of the digits is:%d",iRet);
    return 0;
}

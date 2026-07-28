#include<stdio.h>
int display(int no)
{
   int sum=0;
   while(no!=0)
   {
     sum=sum+no;
     no--;
   }
   return sum;
}
int main()
{
    int iValue=0;int iRet=0;
    printf("enter the value:");
    scanf("%d",&iValue);
    iRet=display(iValue);
    printf("addition of the numbers:%d",iRet);
    return 0;
}
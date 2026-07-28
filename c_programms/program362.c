#include<stdio.h>
int display(int num1,int num2)
{
 int i=0;int sum=0;
 for(i=num1;i<=num2;i++)
 {
  if(i%2==0)
  {
    sum=sum+i;
  }
 }
 return sum;
}
int main()
{
    int a=0;int b=0;int Ret=0;
    printf("enter a number of a:");
    scanf("%d",&a);
    printf("enter a number of b:");
    scanf("%d",&b);
    Ret=display(a,b);
    printf("addition of the even numbers is:%d",Ret);
    return 0;
}
#include<stdio.h>
int countEvenFactors(int iNo)
{
    int i=0;
  if(iNo<=0)
  {
    iNo=-iNo;
  }
  for(i=1;i<iNo;i++)
  {
    if((iNo%i==0)&&(i%2==0))
    {
        printf("%d\n",i);
    }
  }
}
int main()
{
 int iValue=0;
 printf("enter a your number:");
 scanf("%d",&iValue);
 countEvenFactors(iValue);
 return 0;
}
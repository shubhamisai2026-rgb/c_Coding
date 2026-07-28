#include<stdio.h>
void display(int iNo)
{
  int iCnt=0;
  for(iCnt=iNo;iCnt>=0;iCnt--)
  {
   printf("%d\t",iCnt);
  }
}
int main()
{
   int iValue=0;
   printf("enter the value:");
   scanf("%d",&iValue);
   display(iValue);
return 0;
}

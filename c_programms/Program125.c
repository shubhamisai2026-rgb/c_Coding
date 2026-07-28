#include<stdio.h>
int main()
{
   int iNumber=0;
   printf("enter the number:");
   scanf("%d",&iNumber);
   CallByValue(&iNumber); //call by value 11
   printf("%d",iNumber);
   return 0;
}
void CallByValue(int *iPtr)
{
    ++(*iPtr);
}
#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0
bool division(int iNo)
{
if((iNo%5==0))
{
   return TRUE;
}
else
{
    return FALSE;
}
}
int main()
{
int iValue;
printf("enter a your number:");
scanf("%d",&iValue);
bool iRet=FALSE;
iRet=division(iValue);
if(iRet==TRUE)
{
    printf("number is divisible by 5");
}
else
{
    printf("number is not divisible by 5");
}
return 0;
}
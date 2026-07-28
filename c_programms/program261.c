#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL division(int iValue)
{
    if(iValue%2==0)
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
int iNo=0;
printf("enter a your number:");
scanf("%d",&iNo);
BOOL iRet=FALSE;
iRet=division(iNo);
if(iRet==TRUE)
{
    printf("the number is even:");
}
else
{
    printf("the number is odd:");
}
return 0;
} 
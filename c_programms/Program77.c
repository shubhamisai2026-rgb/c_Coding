#include<stdio.h>

void display(int iNo)
{
    int iDigit=0;
    while (iNo!=0)
    {
    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/10;
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
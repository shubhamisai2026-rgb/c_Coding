#include<stdio.h>
void display(int no)
{
     int iDigit=0;
    if(no!=0)
    {
        iDigit=no%10;
        printf("%d\n",iDigit);
        no=no/10;
        display(no);
    }
}
int main()
{
    int iValue=0;
    printf("enter a number:");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
#include <stdio.h>
void display(int iNo)
{
    if (iNo < 10)
    {
        printf("hello");
    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int iValue = 0;
    printf("enter a your number:");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}
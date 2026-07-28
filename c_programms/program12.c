#include <stdio.h>
void CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
    iRemainder = iNo % 2;
    if (iRemainder == 0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number:\n");
    scanf("%d", &ivalue);
    CheckEvenOdd(ivalue);
    return 0;
}
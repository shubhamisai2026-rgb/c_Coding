#include <stdio.h>
int CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
    iRemainder = iNo % 2;
    return iRemainder;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number:\n");
    scanf("%d", &ivalue);

    iret = CheckEvenOdd(ivalue);
    if (iret == 0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd");
    }
    return 0;
}
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

    printf("enter number to check weather it is even or odd:");
    scanf("%d", &ivalue);

    iret = CheckEvenOdd(ivalue);
    if (iret == 0)
    {
        printf("%d is even\n", ivalue);
    }
    else
    {
        printf("%d is odd", ivalue);
    }
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;
    iRemainder = iNo % 2;
    if (iRemainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;
    bool bret = false;
    printf("enter number to check weather it is even or odd:");
    scanf("%d", &ivalue);

    bret = CheckEvenOdd(ivalue);

    if (bret == true)
    {
        printf("%d is even\n", ivalue);
    }
    else
    {
        printf("%d is odd", ivalue);
    }
    return 0;
}
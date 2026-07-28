#include <stdio.h>
int main()
{
    int No = 0;
    printf("enter a your number:");
    scanf("%d", &No);
    int iDigit = 0;
    while (No != 0)
    {
        iDigit = No % 10;
        printf("%d", iDigit);
        No = No / 10;
    }
    return 0;
}
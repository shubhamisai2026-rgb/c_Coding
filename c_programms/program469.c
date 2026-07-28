#include <stdio.h>
int main()
{
    int num = 0;
    int iDigit = 0;
    printf("enter a your first number:");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        sum = iDigit + sum;
        num = num / 10;
    }
    printf("addition of the digits is:%d", sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int num = 0;
    int iDigit = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    int count = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit == 1)
        {
            count++;
        }
        num = num / 10;
    }
    printf("frequency of the 1 digit is:%d", count);
    return 0;
}
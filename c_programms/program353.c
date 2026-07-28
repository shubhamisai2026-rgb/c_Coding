#include <stdio.h>
int Odd(int num)
{
    int iDigit = 0;
    int count = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit % 2 != 0)
        {
            count++;
        }
        num = num / 10;
    }
    return count;
}
int main()
{
    int num = 0;
    int iRet = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    iRet = Odd(num);
    printf("odd digits:%d", iRet);
    return 0;
}
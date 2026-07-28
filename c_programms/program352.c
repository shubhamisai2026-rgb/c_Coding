#include <stdio.h>
int Even(int num)
{
    int iDigit = 0;
    int Count = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit % 2 == 0)
        {
            Count++;
        }
        num = num / 10;
    }
    return Count;
}
int main()
{
    int num;
    int iRet = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    iRet = Even(num);
    printf("%d", iRet);
    return 0;
}
#include <stdio.h>
int display(int num)
{
    int iDigit = 0;
    int iCount = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit == 4)
        {
            iCount++;
        }
        num = num / 10;
    }
    return iCount;
}
int main()
{
    int num = 0;
    int Ret = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    Ret = display(num);
    printf("frequency:%d", Ret);
    return 0;
}
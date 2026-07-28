#include <stdio.h>
int display(int num)
{
    int iDigit = 0;
    int iCount = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit == 3 || iDigit == 7)
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
    printf("enter a your number:");
    scanf("%d", &num);
    int iRet = 0;
    iRet = display(num);
    printf("%d", iRet);
    return 0;
}
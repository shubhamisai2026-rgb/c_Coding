#include <stdio.h>
int difference(int num)
{
    int iDigit = 0;
    int eCount = 0;
    int oCount = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit % 2 == 0)
        {
            eCount = eCount + iDigit;
        }
        else
        {
            oCount = oCount + iDigit;
        }
        num = num / 10;
    }
    return eCount - oCount;
}
int main()
{
    int num = 0;
    int iRet = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    iRet = difference(num);
    printf("%d", iRet);
    return 0;
}

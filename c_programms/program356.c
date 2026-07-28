#include <stdio.h>
int display(int num)
{
    int ecount = 0;
    int ocount = 0;
    int iDigit = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit % 2 == 0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
        num=num/10;
    }
    return ecount + ocount;
}
int main()
{
    int num = 0;
    int iRet = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    iRet = display(num);
    printf("%d", iRet);
    return 0;
}
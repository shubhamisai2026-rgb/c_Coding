#include <stdio.h>
int display(int num)
{
    int iDigit = 0;
    int iMul = 1;
    while (num != 0)
    {
        iDigit = num % 10;
        iMul = iDigit * iMul;
        num = num / 10;
    }
    return iMul;
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    int iRet = 0;
    iRet = display(num);
    printf("multiplication of all digits is:%d", iRet);
    return 0;
}
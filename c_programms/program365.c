#include <stdio.h>
typedef int zero;
#define TRUE 1
#define FALSE 0
zero display(int num)
{
    int iDigit = 0;
    while (num != 0)
    {
        iDigit = num % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }
        num = num / 10;
    }
    return FALSE;
}
int main()
{
    int num = 0;
    int Ret = FALSE;
    printf("enter a your number:");
    scanf("%d", &num);
    Ret = display(num);
    if (Ret == TRUE)
    {
        printf("contain zero..!");
    }
    else
    {
        printf("not contain zero...!");
    }
    return 0;
}

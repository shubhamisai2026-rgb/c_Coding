#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 0x1000;
    UINT ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);

    ans = mask & num;

    if (num == mask)
    {
        printf("13th bit is on");
    }
    else
    {
        printf("13th bit is the off");
    }
    return 0;
}
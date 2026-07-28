#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 0x40;
    UINT ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);

    ans = num & mask;
    if (ans == mask)
    {
        printf("the 7th bit is a on");
    }
    else
    {
        printf("the 7th bit is the off");
    }
    return 0;
}
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 0x10000;
    UINT ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    ans = num & mask;
    if (ans == mask)
    {
        printf("17th bit is the on");
    }
    else
    {
        printf("17th bit is the off");
    }
    return 0;
}
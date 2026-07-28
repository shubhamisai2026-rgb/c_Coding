#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 0x00010000;
    UINT ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    ans = num & mask;
    if (mask == ans)
    {
        printf("17th bit is on....");
    }
    else
    {
        printf("17th bit is off...");
    }
    return 0;
}
#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 4096;
    unsigned int ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    ans = num & mask;
    if (ans == mask)
    {
        printf("13th bit is on...");
    }
    else
    {
        printf("13th bit is off...");
    }
    return 0;
}

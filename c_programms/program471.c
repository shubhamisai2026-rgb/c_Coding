#include <stdio.h>
int main()
{
    unsigned int num = 0;
    unsigned int mask = 1;
    unsigned int ans = 0;
    printf("enter a your first number:");
    scanf("%d", &num);
    ans = mask & num;
    if (ans == mask)
    {
        printf("third bit is the on....");
    }
    else
    {
        printf("third bit is the off....");
    }
    return 0;
}
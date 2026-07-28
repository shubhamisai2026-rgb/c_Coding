#include <stdio.h>
int main()
{
    int num = 0;
    int mask = 4;
    int ans = 0;
    printf("enter a your first number:");
    scanf("%d", &num);
    ans = num & mask;
    printf("%d\n", ans);
    if (ans == mask)
    {
        printf("third bit is on");
    }
    else
    {
        printf("third bit is the off");
    }
    return 0;
}
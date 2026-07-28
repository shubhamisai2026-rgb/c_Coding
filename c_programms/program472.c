#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 4;
    UINT ans = 0;
    printf("enter a your first number:");
    scanf("%d", &num);

    ans = num & mask;
    if (ans == mask)
    {
        printf("third bit is the on......");
    }
    else
    {
        printf("third bit is the off......");
    }
    return 0;
}
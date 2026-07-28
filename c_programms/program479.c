#include <stdio.h>
typedef unsigned int UINT;
int main()
{
    UINT num = 0;
    UINT mask = 0x1;
    UINT ans = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    UINT pos = 0;
    printf("enter a your position:");
    scanf("%d", &pos);

    mask = mask << (pos - 1);

    ans = mask & num;

    if (mask == ans)
    {
        printf("BIT is a on");
    }
    else
    {
        printf("BIT is a off");
    }
    return 0;
}
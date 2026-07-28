#include <stdio.h>
void pattern(int num)
{
    if (num <= 0)
    {
        num = -num;
    }
    int i = 0;
    for (i = 1; i <= num; i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    pattern(num);
    return 0;
}

#include <stdio.h>
int display(int num)
{
    int sum = 1;
    int i = 0;
    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum * i;
        }
    }
    return sum;
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    int Ret = 0;
    Ret = display(num);
    printf("%d", Ret);
    return 0;
}
#include <stdio.h>
int display(int num)
{
    int i = 0;
    int Sum = 1;
    int Sum2 = 1;
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            Sum = Sum * i;
        }
        else
        {
            Sum2 = Sum2 * i;
        }
    }
    return (Sum2 - Sum);
}
int main()
{
    int num = 0;
    int Ret = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    Ret = display(num);
    printf("%d", Ret);
    return 0;
}
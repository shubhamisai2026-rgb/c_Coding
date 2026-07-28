#include <stdio.h>
int display(int num)
{
    int i = 0;
    int sum = 1;
    for (i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    return sum;
}
int main()
{
    int num;
    int Ret = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    Ret = display(num);
    printf("%d", Ret);
    return 0;
}
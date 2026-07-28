#include <stdio.h>
void display(int num)
{
    int i = 0;
    int temp = num;
    if (num >= 0)
    {
        num = num - (num * 2);
    }
    for (i = num; i <= temp; i++)
    {
        printf("%d\t", i);
    }
}
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    display(num);
    return 0;
}
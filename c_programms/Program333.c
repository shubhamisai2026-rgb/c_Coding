#include <stdio.h>
void display(int num)
{
    if (num <= 0)
    {
        num = -num;
    }
    int i = 0;
    for (i = 1; i <= num; i++)
    {
        printf("%d\t", i);
    }
}
int main()
{
    int num;
    printf("enter a your number:");
    scanf("%d", &num);
    display(num);
    return 0;
}
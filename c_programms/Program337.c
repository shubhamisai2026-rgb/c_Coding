#include <stdio.h>
void display(int num)
{
    int i = 0;
    if (num <= 0)
    {
        num = -num;
    }
    if (num < 50)
    {
        printf("small...!");
    }
    else if (num >= 50 && num <= 100)
    {
        printf("medium....!");
    }
    else
    {
        printf("high......!");
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
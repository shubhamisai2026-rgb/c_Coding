#include <stdio.h>
void display(int num)
{
    int i = 0;
    int j = 0;
    if (num <= 0)
    {
        num = -num;
    }
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == 1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
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
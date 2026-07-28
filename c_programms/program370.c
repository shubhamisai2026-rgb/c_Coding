#include <stdio.h>
void display(int num1, int num2)
{
    int i = 0;
    int j = 0;
    int count = 0;
    for (i = num1; i <= num2; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\t", i);
        }
        count=0;
    }
}

int main()
{
    int value1 = 0;
    int value2 = 0;
    printf("enter a your first number:");
    scanf("%d", &value1);
    printf("enter a your second number:");
    scanf("%d", &value2);
    display(value1, value2);
    return 0;
}
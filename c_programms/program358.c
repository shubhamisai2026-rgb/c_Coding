#include <stdio.h>
void range(int num1, int num2)
{
    int i = 0;
    for (i = num1; i < num2; i++)
    {
        printf("%d", i);
    }
}
int main()
{
    int a = 0;
    int b = 0;
    printf("enter a value of a:");
    scanf("%d", &a);
    printf("enter a value of b:");
    scanf("%d", &b);
    range(a, b);
    return 0;
}
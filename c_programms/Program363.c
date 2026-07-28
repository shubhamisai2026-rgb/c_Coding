#include <stdio.h>
void display(int num1, int num2)
{
    int i = 0;
    for (i = num2; i >= num1; i--)
    {
        printf("%d\t", i);
    }
}
int main()
{
    int a = 0;
    int b = 0;
    printf("enter a number of a:");
    scanf("%d", &a);
    printf("enter a number of b:");
    scanf("%d", &b);
    display(a, b);
    return 0;
}
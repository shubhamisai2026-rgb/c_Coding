#include <stdio.h>
int main()
{
    int num = 0;
    printf("enter a your number:");
    scanf("%d", &num);
    display(num);
    return 0;
}
void display(int num)
{
    for (int i = num; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    }
}
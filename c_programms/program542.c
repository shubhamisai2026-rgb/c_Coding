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
    printf("#\t");
    for (int i = 1; i < num; i++)
    {
        printf("%d\t*\t#\t", i);
    }
    printf("%d\t*", num);
}
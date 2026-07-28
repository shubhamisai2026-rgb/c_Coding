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
    char ch = 'A';
    for (int i = 0; i < num; i++)
    {
        printf("%c\t", ch);
        ch++;
    }
}
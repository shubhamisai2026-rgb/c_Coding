#include <stdio.h>
void display(char *str)
{
    *str = 'A';
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    display(str);
    printf("entered string is:%s", str);
    return 0;
}
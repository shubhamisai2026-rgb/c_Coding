#include <stdio.h>
void display(char *str)
{
    printf("%c", *str);
    str++;
    printf("%c", *str);
    str++;
    printf("%c", *str);
    str++;
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a string:");
    scanf("%[^'\n']s", str);
    display(str);
    return 0;
}
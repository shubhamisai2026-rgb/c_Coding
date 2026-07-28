#include <stdio.h>
void display(char *str)
{
    printf("ener string is:%s", str);
}
int main()
{
    char str[] = {'\0'};
    printf("enter a string:\n");
    scanf("%[^'\n']s", str);
    display(str);
    return 0;
}
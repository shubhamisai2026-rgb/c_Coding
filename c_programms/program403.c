#include <stdio.h>
void display(char str[])
{
    printf("entered string is:%s", str);
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    display(str);
    return 0;
}

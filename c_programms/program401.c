#include <stdio.h>
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    printf("entered string is:%s", str);
    return 0;
}
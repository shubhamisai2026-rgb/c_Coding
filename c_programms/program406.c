#include <stdio.h>
int display(char *str)
{
    int icount = 0;
    while (*str != '\0')
    {
        str++;
        icount++;
    }
    return icount;
}
int main()
{
    int len = 0;
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    len = display(str);
    printf("length of the string is:%d",len);
}
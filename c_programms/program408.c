#include <stdio.h>
int display(char * const str)
{
    int count = 0;
    while (*str != '\0')
    {
        //str++; this program only for understand the const modifier
        count++;
    }
    return count;
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    int Ret = 0;
    Ret = display(str);
    printf("enter the length of the string is:%d", Ret);
    return 0;
}
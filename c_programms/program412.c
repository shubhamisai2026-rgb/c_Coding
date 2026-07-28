#include <stdio.h>
int display(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    int iRet = 0;
    iRet = display(str);
    printf("length of the string is:%d", iRet);
    return 0;
}
#include <stdio.h>
int display(const char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        str++;
        count++;
    }
    return count;
}
int main()
{
    char str[50] = {'\n'};
    printf("enter the string is:");
    scanf("%[^'\n]s", str);
    int iRet = 0;
    iRet = display(str);
    printf("length of the string is:%d", iRet);
    return 0;
}
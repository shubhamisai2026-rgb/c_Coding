#include <stdio.h>
int display(char *str)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char ch[100];
    printf("enter a your string:\n");
    scanf("%[^\n]", ch);
    int iRet = 0;
    iRet = display(ch);
    printf("number of small laters in the string is:%d", iRet);
    return 0;
}
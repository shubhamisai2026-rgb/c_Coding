#include <stdio.h>
#include <string.h>
int display(char *str)
{
    int Count1 = 0;
    int Count2 = 0;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            Count1++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            Count2++;
        }
        str++;
    }
    return Count2 - Count1;
}
int main()
{
    char ch[20];
    printf("enter a your string:\n");
    scanf("%[^\n]", ch);
    int iRet = 0;
    iRet = display(ch);
    printf("frequency:%d", iRet);
    return 0;
}
#include <stdio.h>
int main()
{
    char ch[20];
    printf("enter a your string:\n");
    scanf("%[^\n]", ch);
    int iRet = 0;
    iRet = display(ch);
    if (iRet == 1)
    {
        printf("vowel contain..");
    }
    else
    {
        printf("vowel not contain..");
    }
}
int display(char *str)
{
    while (*str != '\0')
    {
        if (
            *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'I' || *str == 'O' || *str == 'E' || *str == 'U')
        {
            return 1;
        }
        str++;
    }
    return 0;
}
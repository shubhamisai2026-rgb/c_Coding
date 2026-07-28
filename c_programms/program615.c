#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL display(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    printf("enter a character:\n");
    scanf("%c", &ch);
    BOOL iRet = FALSE;

    iRet = display(ch);
    if (iRet == TRUE)
    {
        printf("this is the character.....");
    }
    else
    {
        printf("this is not a character.....");
    }
}
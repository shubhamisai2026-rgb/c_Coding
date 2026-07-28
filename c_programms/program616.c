#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL display(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
    printf("enter a your character:\n");
    scanf("%c", &ch);
    BOOL iRet = FALSE;
    iRet = display(ch);
    if (iRet == TRUE)
    {
        printf("later is the capital...");
    }
    else
    {
        printf("later is not a capital...");
    }
    return 0;
}
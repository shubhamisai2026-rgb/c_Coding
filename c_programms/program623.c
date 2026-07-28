#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL display(char ch)
{
    if (
        ch == '!' || ch == '@' || ch == '#' || ch == '$' 
        || ch == '%' || ch == '^' || ch == '&' || ch == '*' || ch == '~'
         
    )
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
        printf("it is a special character.....");
    }
    else
    {
        printf("it is not a special character....");
    }
    return 0;
}
#include <stdio.h>
typedef int sb;
#define TRUE 1
#define FALSE 0
sb check(char iNo)
{

    if (iNo == 'a' || iNo == 'A' || iNo == 'e' || iNo == 'E' || iNo == 'i' || iNo == 'I' || iNo == 'o' || iNo == 'O' || iNo == 'u' || iNo == 'U')
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
    char iValue = 0;
    printf("enter a your character:");
    scanf("%c", &iValue);
    sb iRet = FALSE;
    iRet = check(iValue);
    if (iRet == TRUE)
    {
        printf("vowel");
    }
    else
    {
        printf("not vowel");
    }
    return 0;
}
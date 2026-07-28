#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL display(char ch)
{
    if((ch>='a' && ch<='j') ||(ch>='A' && ch<='J'))
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
    char ch=0;
    printf("enter a your number:\n");
    scanf("%c",&ch);
    BOOL iRet=display(ch);
    if(iRet==TRUE)
    {
        printf("it is a digit....");
    }
    else
    {
        printf("it is not a digit....");
    }
}
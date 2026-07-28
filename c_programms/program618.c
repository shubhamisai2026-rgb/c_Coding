#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL display(char ch)
{
   if(ch>='a' && ch<='z')
   {
     printf("it is small case character...");
   }
   else
   {
    printf("it is not a small case character");
   }
}
int main()
{
    char ch='\0';
    printf("enter a character:\n");
    scanf("%c",&ch);
    BOOL iRet=FALSE;
    iRet=display(ch);
    return 0;
}
#include<stdio.h>
#include<stdbool.h>
bool checkchar(char *str,char ch)
{
    bool iRet=false;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iRet=true;
            break;
        }
        str++;
    }
    return iRet;
}
int main()
{
    char str[30]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s",str);
    char ch='\0';
    printf("enter a your character:");
    scanf(" %c",&ch);
    bool iRet=false;
    iRet=checkchar(str,ch);
    if(iRet==true)
    {
        printf("the character is present in the string");
    }
    else
    {
        printf("the character is not present in the string");
    }
    return 0;
}
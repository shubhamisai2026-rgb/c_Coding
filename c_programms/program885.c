#include<stdio.h>
#define TRUE 1
#define FALSE 0

int display(char str1[],char str2[])
{
    while(*str1!='\0')
    {
        str1++;
    }
    str1--;
    while(str1!='\0' && str2!='\0')
    {
        if(*str1!=*str2)
        {
            return FALSE;
        }
        str1--;str2++;
    }
    return TRUE;
}
int main()
{
    char str1[]={'\0'};
    char str2[]={'\0'};
    printf("enter a string first:");
    scanf("%[^'\n']s",str1);
    printf("enter a string second:");
    scanf("%[^'\n']s",str2);
    int iRet=display(str1,str2);
    if(iRet==TRUE)
    {
        printf("the string is the anagram....");
    }
    else
    {
        printf("the string is not the anagram....");
    }
}
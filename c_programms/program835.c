#include<stdio.h>
int charfrequency(char *str,char ch)
{
    int count=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
           count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char arr[30]={'\0'};
    printf("enter the your string:");
    scanf("%[^'\n']",arr);
    char ch='\0';
    printf("enter the character:");
    scanf(" %c",&ch);
    int iRet=0;
    iRet=charfrequency(arr,ch);
    printf("frequency of the character is:%d",iRet);
    return 0;
}
#include<stdio.h>
int charfrequecy(char *str,char ch)
{
    int count=0;int i=0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            i=count;
        }
        count++;
        str++;
    }
    return i;
}
int main()
{
    char arr[30]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']",arr);
    char ch='\0';
    printf("enter a your character:");
    scanf(" %c",&ch);
    int iRet=0;
    iRet=charfrequecy(arr,ch);
    printf("location of the character is:%d",iRet);
    return 0;
}
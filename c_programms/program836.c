#include<stdio.h>
int charlocation(char *str,char ch)
{
   int i=0;
   while(*str!='\0')
   {
    if(*str==ch)
    {
       return i;
    }
    i++;
    str++;
   }
   return -1;
}
int main()
{
    char arr[30]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']",arr);
    char ch='\0';
    printf("enter a character:");
    scanf(" %c",&ch);
    int iRet=0;
    iRet=charlocation(arr,ch);
    printf("location of the character is:%d",iRet);
    return 0;
}
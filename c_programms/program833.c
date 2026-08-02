#include<stdio.h>
strcon(char *str1,char *str2)
{   
    while(*str1!='\0')
    {
       str1++;
    }
    *str1="\t";
    while(*str2!='\0')
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str2='\0';
}
int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    printf("enter the string first:");
    scanf(" %[^'\n']s",arr);
    printf("enter the string second:");
    scanf(" %[^'\n']s",brr);
    strcon(arr,brr);
    printf("%s",arr);
    return 0;
}
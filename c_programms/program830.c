#include<stdio.h>
void strncpy(char *src,char *dest,int no)
{
    while((*src!='\0')&&(no!=0))
    {
        *dest=*src;
        src++;
        dest++;
        no--;
    }
}
int main()
{
    char arr[30]={'\0'};
    char brr[30]={'\0'};
    printf("enter the string:\n");
    scanf("%[^'\n']s",arr);
    int no=0;
    printf("enter a number:\n");
    scanf("%d",&no);
    strncpy(arr,brr,no);
    printf("copied string is %s",brr);
    return 0;
}
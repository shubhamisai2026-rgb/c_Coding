#include<stdio.h>
void display(char *str)
{
    while(*str!='\0')
    {
        if(*str=='s')
        {
            *str='_';
        }
        str++;
    }
}
int main()
{
    char str[50]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s",str);
    display(str);
    printf("the string is:%s",str);
    return 0;
}
#include<stdio.h>
void display(char str[])
{
    printf("entered string is:%c\n",str[0]);
    printf("entered string is:%c\n",str[1]);
    printf("entered string is:%c\n",str[2]);
}
int main()
{
    char str[50]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s",str);
    display(str);
    return 0;
}
#include<stdio.h>
int main()
{
    char str[80]={'\0'};
    printf("enter command:\n");
    scanf("%[^'\n']s",str);
    printf("entered command is:%s\n",str);
    return 0;
}
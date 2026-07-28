#include<stdio.h>
void Reverse_Display(char *str)
{
 printf("%s",str);
}
int main()
{
    char str[50]={'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s",str);
    Reverse_Display(str);
    return 0;
}
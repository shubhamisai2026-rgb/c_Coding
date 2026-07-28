#include <stdio.h>
void Reverse_Display(char *str)
{
    char *start=NULL;
    start=str;
    while(*str!='\0')
    {
        str++;
    }
    str--;
    printf("reverse string is:");
    while(start<=str)
    {
        printf("%c\n",*str);
        str--;
    }
    printf("\n");
}
int main()
{
    char str[50] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    Reverse_Display(str);
    return 0;
}
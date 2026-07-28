#include <stdio.h>
void display(char *str)
{
    while (*str != '\0')
    {
        str++;
    }
    str--;
    int i = 0;
    for (i = 0; i < strlen(str); i++,str--)
    {
        printf("%c", *str);
    }
}
int main()
{
    char ch[20];
    printf("enter a your string:\n");
    scanf("%[^\n]s", ch);
    display(ch);
    return 0;
}
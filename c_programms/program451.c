#include <stdio.h>
int main()
{
    char str[] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    Reverse_Display(str);
    return 0;
}
void Reverse_Display(char *str)
{
    char *start = NULL;
    start = str;
    while (*str != '\0')
    {
        str++;
    }
    
    // issue
    while (start <= str)
    {
        printf("%c", *str);
        str--;
    }
}

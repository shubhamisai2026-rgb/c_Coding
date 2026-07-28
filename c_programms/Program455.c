#include <stdio.h>
void Reverse_Display(char *str)
{
    char *start = NULL;
    char *end = NULL;
    start = str;
    while (*str != '\0')
    {
        str++;
    }
    str--;
    while (start <= str)
    {
        printf("%s\n", str);
        str--;
    }
    printf("\n");
}
int main()
{
    char str[] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    Reverse_Display(str);
    return 0;
}
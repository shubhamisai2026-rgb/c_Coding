#include <stdio.h>
void Reverse_Display(char *str)
{
    char *start = NULL;
    char *end = NULL;
    int temp = 0;
    start = str;
    while (str != '\0')
    {
        str++;
    }
    str--;
    end = str;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char str[] = {'\0'};
    printf("enter a your string:");
    scanf("%[^'\n']s", str);
    Reverse_Display(str);
    printf("the reverse string is:%s", str);
    return 0;
}
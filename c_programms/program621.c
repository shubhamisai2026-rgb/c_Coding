#include<stdio.h>
int main()
{
    char ch='\0';
    printf("enter a character:\n");
    scanf("%c",&ch);
    display(ch);
    return 0;
}
void display(char ch)
{
    if(ch>='a' && ch<='z')
    {
        printf("%c",ch-32);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("%c",ch+32);
    }
    else
    {
        printf("%c",ch);
    }
}

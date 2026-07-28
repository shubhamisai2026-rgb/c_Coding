#include<stdio.h>
void display(char ch)
{
    char i='\0';
    if(ch>='a' && ch<='z')
    {
        for(i=ch;i<='z';i++)
        {
            printf("%c\t",i);
        }
    }
     else if(ch>='A' && ch<='Z')
    {
        for(i=ch;i<='Z';i++)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        printf("it is not alphabet...");
    }
}
int main()
{
    char ch='\0';
    printf("enter a your character:");
    scanf("%c",&ch);
    display(ch);
    return 0;
}
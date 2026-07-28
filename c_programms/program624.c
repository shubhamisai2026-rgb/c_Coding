#include<stdio.h>
void display(char ch)
{
  
    printf("%d\t%X\t%o",ch,ch,ch);
}
int main()
{
    char ch='\0';
    printf("enter a your character:\n");
    scanf("%c",&ch);
    display(ch);
    return 0;
}
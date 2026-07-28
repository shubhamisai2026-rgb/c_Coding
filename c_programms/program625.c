#include<stdio.h>
void Binary(char ch)
{
    int i=0;
    for(i=7;i>=0;i--)
    {
        printf("%d",(ch>>i)&1);
    }
    printf("\n");
}
int main()
{
    char ch='\0';
    printf("enter a your character:");
    scanf("%c",&ch);
    printf("decimal:%d\n",ch);
    printf("hexadecimal:%x\n",ch);
    printf("octal:%o\n",ch);
    printf("Binary:\n");
    Binary(ch);
    return 0;
}
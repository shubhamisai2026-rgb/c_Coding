#include<stdio.h>
void stricopy(char *str,char *brr)
{
  while(*str-1!='\0')
  {
    *brr=*str;
    brr++;
    str++;
  }
}
int main()
{
    char str[]={'\0'};
    char brr[]={'\0'};
    printf("enter the string:");
    scanf("%s",str);
    stricopy(str,brr);
    printf("copy string is %s",brr);
    return 0;
}
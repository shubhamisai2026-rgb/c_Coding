#include<stdio.h>
void reversestring(char *str)
{
    char *brr=NULL;
      brr=str;
    while(*str!='\0')
    {
      str++;
    }
    str--;

  while(brr<=str)
  {
    printf("%c",*str);
    str--;
  }
}
int main()
{
    char arr[30]={'\0'};

    printf("enter a your string:");
    scanf("%[^'\n']",arr);
    reversestring(arr);
   
    return 0; 
}
#include <stdio.h>
void display(char *str)
{
  if (*str != NULL)
  {
    str++;
    display(str);
    printf("%c", *str);
  }
}
int main()
{
  char ch[20];
  printf("enter a your string:\n");
  scanf("%[^\n]", ch);
  display(ch);
  printf("%c",ch[0]);
  return 0;
}
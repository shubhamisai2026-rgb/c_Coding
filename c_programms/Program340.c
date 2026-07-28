#include<stdio.h>
void display(int num)
{
    int i=0;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",num*i);
    }
}
int main()
{
  int num=0;
  printf("enter a your number:");
  scanf("%d",&num);
  display(num);
    return 0;
}
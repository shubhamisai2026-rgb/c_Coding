#include<stdio.h>
void display()
{
   static int i=1;
    printf("jay ganesh...%d",i);
    i++;
    display();
}
int main()
{
    display();
    return 0;
}
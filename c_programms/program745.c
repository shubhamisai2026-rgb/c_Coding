#include<stdio.h>
void display()
{
   auto int i=1;
    printf("jay ganesh...%d",i);
    i++;
    display();
}
int main()
{
    display();
    return 0;
}
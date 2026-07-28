#include<stdio.h>
void display()
{
   auto int i=0;
    i=1;
    if(i<=4)
    {
        printf("jay ganesh...\n");
        i++;
        display();
    }
}
int main()
{
 display();
 return 0;
}
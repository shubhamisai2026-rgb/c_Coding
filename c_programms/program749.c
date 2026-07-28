#include<stdio.h>
void display()
{
   static int i=0;
    i=1; //issue
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
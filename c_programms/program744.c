#include<stdio.h>
void display()
{
    printf("jay ganesh...\t");

    display();
}
int main()
{
    display();
    return 0;
}
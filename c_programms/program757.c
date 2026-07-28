#include<stdio.h>
void display(int no)
{
    while(no!=0)
    {
        printf("jay ganesh...%d",no);
        no--;
        display(no);
    }
}
int main()
{
    display(3);
    return 0;
}
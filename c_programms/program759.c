#include<stdio.h>
void display(int no)
{
    if(no!=0)
    {
        printf("jay ganesh..%d\n",no);
        display(--no); 
    }
}
int main()
{
    int iValue=0;
    printf("enter the value:");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}
#include<stdio.h>
void display(int no)
{
    static int i=1;
    if(i<=no)
    {
        printf("jay ganesh...%d\n",i);
        i++;
        display(no);
    }
}
int main()
{
    int iValue=0;
    printf("enter a number:");
    scanf("%d",&iValue);
    display(iValue);
    return 0;

}
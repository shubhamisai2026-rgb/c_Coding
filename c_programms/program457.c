#include<stdio.h>
void swap(int i,int j)
{
    int temp=0;
    i=temp;
    i=j;
    j=temp;
}
int main()
{
    int i=0;
    int j=0;
    printf("enter a i:");
    scanf("%d",&i);
    printf("enter a j:");
    scanf("%d",&j);
    swap(i,j);
    printf("%d",i);
    printf("%d",j);
    return 0;
}
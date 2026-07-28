#include<stdio.h>
int main()
{
 int brr[5]={10,20,30,40,50};
 display(brr);
 return 0;
}
void display(int arr[])
{
    int icnt=0;
    for(icnt=0;icnt<5;icnt++)
    {
        printf("%d\n",arr[icnt]);
    }
}
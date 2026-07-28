#include<stdio.h>
int main()
{
   int brr[8]={10,20,30,40,50,60,70,80};
   display(brr);
   return 0;
}
void display(int arr[])
{
    int iCnt=0;
    for(iCnt=0;iCnt<12;iCnt++)
    {
        printf("%d\n",arr[iCnt]);
    }
}
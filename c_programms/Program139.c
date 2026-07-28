#include<stdio.h>
int main()
{
 int iLength=0;int iCnt=0;
 printf("enter the length of array:");
 scanf("%d",&iLength);
 int arr[iLength];
 printf("enter the elements of the array is:");
 for(iCnt=0;iCnt<iLength;iCnt++)
 {
    scanf("%d\n",&arr[iCnt]);
 }
 display(arr,iLength);
 return 0;
}
void display(int brr[],int iSize)
{
    int iCnt=0;
    printf("the elements are:");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
       printf("%d\n",brr[iCnt]);
    }
}
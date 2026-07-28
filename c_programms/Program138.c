#include<stdio.h>
int main()
{
  int iLength=5;
  int arr[iLength];
  arr[0]=10;
  arr[1]=20;
  arr[2]=30;
  arr[3]=40;
  arr[4]=50;
  display(arr,iLength);
}
int display(int brr[],int iSize)
{
  int iCnt=0;
  printf("elements of array is: ");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("%d\n",brr[iCnt]);
  }
}
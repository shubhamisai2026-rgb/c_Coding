#include<stdio.h>
int main()
{
    int iLength=5;
  int arr[iLength];  //int arr[iLength]={10,20,30,40,50} not allowed,compiler gives the compile time error
  display(arr,iLength);
  return 0;
}
void display(int brr[],int iSize)
{
  int iCnt=0;
  printf("enter the array elements:");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&brr[iCnt]);
  }
  printf("elements of array are:");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("%d\n",brr[iCnt]);
  }
}
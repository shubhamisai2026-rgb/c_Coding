#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  display(arr,5);
  return 0;
}
void display(int brr[],int iSize)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    printf("%d\n",brr[iCnt]);
  }
}
#include<stdio.h>
int main()
{
  int arr[5]={10,20,30,40,50};
  CallByValue(arr);
  return 0;
}
void CallByValue(int *iPtr)
{
   printf("%d",*iPtr);
}
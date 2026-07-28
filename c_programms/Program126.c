#include<stdio.h>
int main()
{
 int arr[5]={10,20,30,40,50};
 printf("base address of the array is: %d\n",arr);
 CallByValue(arr);
 return 0;
}
void CallByValue(int *iPtr)
{
  printf("value of iptr: %d",iPtr);
}
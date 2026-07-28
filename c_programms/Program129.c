#include<stdio.h>
int main()
{
 int arr[5]={10,20,30,40,50};
 display(arr);
 return 0;
}
void display(int iPtr[])
{
   printf("%d\n",*iPtr);
   iPtr++;
   printf("%d\n",*iPtr);
   iPtr++;
   printf("%d\n",*iPtr);
   iPtr++;
   printf("%d\n",*iPtr);
   iPtr++;
   printf("%d",*iPtr);
   iPtr++;
}
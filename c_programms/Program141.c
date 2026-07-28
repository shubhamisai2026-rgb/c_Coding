#include<stdio.h>
#include<stdlib.h>
int main()
{
int iCnt=0;
int iLength=0;
//step 1:accept the number of elements are
printf("enter the array length:");
scanf("%d",&iLength);
int *brr=NULL;
//step 2:allowcate the memory
brr=(int *)malloc(iLength * sizeof(int));
//step 3:accept the value from the user
printf("enter the elements of the array:");
for(iCnt=0;iCnt<iLength;iCnt++)
{
    scanf("%d",&brr[iCnt]);
}
//step 4:use the memory logic
printf("elements of the array are:");
for(iCnt=0;iCnt<iLength;iCnt++)
{
    printf("%d\n",brr[iCnt]);
}
//step 5:deallocate the memory
free(brr);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int display(int arr[],int size,int no)
{
 for(int i=0;i<size;i++)
 {
    if(arr[i]==no)
    {
        return i;
    }
 }
}
int main()
{
    int *brr=NULL;int iLength=0;int no=0;
    printf("enter the size of array:");
    scanf("%d",&iLength);
    brr=malloc(iLength*sizeof(int));
    printf("enter the elements of the array is:\n");
    for(int i=0;i<iLength;i++)
    {
      scanf("%d",&brr[i]);
    }
    printf("enter the element:\n");
    scanf("%d",&no);
    int Ret=display(brr,iLength,no);
    printf("eindex of the number is:%d",Ret);
    free(brr);
    return 0;
}

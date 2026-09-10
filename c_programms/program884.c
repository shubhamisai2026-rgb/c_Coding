#include<stdio.h>
#define FALSE 0
#define TRUE 1
int main()
{
    int nums[12]={1,2,3,4,4,5,6,7,7,8,9,10};
    int iRet=FALSE;
    iRet=display(nums,12);
    if(iRet==TRUE)
    {
        printf("duplication number are present...");
    }
    else
    {
        printf("duplicate number are not present....");
    }
}
int display(int arr[],int no)
{
  for(int i=0;i<12;i++)
  {
    for(int j=i+1;j<12;j++)
    {
        if(arr[i]==arr[j])
        {
            return TRUE;
        }
    }
  }
  return FALSE;
}
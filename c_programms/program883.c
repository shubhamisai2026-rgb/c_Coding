#include<stdio.h>
int main()
{
    int nums[9]={1,2,3,4,5,6,7,8,9};
    int target=11;
    display(nums,9,target);
    return 0;
}
void display(int arr[],int no,int target)
{
    for(int i=0;i<no;i++)
    {
        for(int j=i+1;j<no;j++)
        {
            if(arr[i]+arr[j]==target)
            {
              printf("[%d,%d]",arr[i],arr[j]);
              return;
            }
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
int Even(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int Ret = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Ret = Even(brr, iLength);
    printf("even numbers of the array is:%d", Ret);
    free(brr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int minimum(int arr[], int iLength)
{
    int i = 0;
    int j = 0;
    int min = 0;
    min = arr[0];
    for (i = 0; i < iLength; i++)
    {
        for (j = i; j < iLength; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
            }
        }
    }
    return min;
}
int main()
{
    int size = 0;
    int *brr = NULL;
    int i = 0;
    printf("enter a array size:");
    scanf("%d", &size);
    brr = (int *)malloc(size * sizeof(int));
    int Ret = 0;
    printf("enter the element of the array is:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &brr[i]);
    }
    Ret = minimum(brr, size);
    printf("smallest element of the array is:%d", Ret);
    free(brr);
    return 0;
}
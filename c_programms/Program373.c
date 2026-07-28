#include <stdio.h>
#include <stdlib.h>
int Max_Min(int arr[], int iLength)
{
    int i = 0;
    int j = 0;
    int max = 0;
    int min = 0;
    max = arr[0];
    min = arr[0];
    for (i = 0; i < iLength; i++)
    {
        for (j = i; j < iLength; j++)
        {
            if (max < arr[j])
            {
                max = arr[j];
            }
            if (min > arr[j])
            {
                min = arr[j];
            }
        }
    }
    return max - min;
}
int main()
{
    int size = 0;
    int Ret = 0;
    int *brr = NULL;
    int i = 0;
    printf("enter the size of the array is:");
    scanf("%d", &size);
    brr = (int *)malloc(size * sizeof(int));
    printf("enter the elements of a array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &brr[i]);
    }
    Ret = Max_Min(brr, size);
    printf("difference between max and min:%d", Ret);
    free(brr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int Difference(int arr[], int size)
{
    int i = 0;
    int even = 0;
    int odd = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = arr[i] + even;
        }
        else
        {
            odd = arr[i] + odd;
        }
    }
    return even - odd;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int Ret = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Ret = Difference(brr, iLength);
    printf("difference betwee even and odd:%d", Ret);
    free(brr);
    return 0;
}
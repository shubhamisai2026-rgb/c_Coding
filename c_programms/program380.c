#include <stdio.h>
#include <stdlib.h>
int Division(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 11 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    printf("enter the size of a array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Division(brr, iLength);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
void Division(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 5 == 0)
        {
            printf("%d", arr[i]);
        }
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    printf("enter the size of array:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Division(brr, iLength);
    free(brr);
    return 0;
}
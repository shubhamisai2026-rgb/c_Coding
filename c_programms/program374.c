#include <stdio.h>
#include <stdlib.h>
void Three_Digits(int arr[], int iLength)
{
    int i = 0;

    for (i = 0; i < iLength; i++)
    {
        if(arr[i]>=100)
        {
            printf("%d\t",arr[i]);
        }
    }
}
int main()
{
    int *brr = NULL;
    int i = 0;
    int size = 0;
    printf("enter the size of the array is:");
    scanf("%d", &size);
    brr = (int *)malloc(size * sizeof(int));
    printf("enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &brr[i]);
    }
    Three_Digits(brr, size);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int ret(int arr[], int size)
{
    int odd = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd = odd * arr[i];
        }
    }
    return odd;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    printf("enter the size of the array:");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    int Ret = ret(brr, iLength);
    printf("%d", Ret);
    return 0;
}
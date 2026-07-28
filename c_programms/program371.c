#include <stdio.h>
#include <stdlib.h>
int display(int arr[], int iLength)
{
    int i = 0;
    int j = 0;
    int iMax = 0;
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &arr[i]);
    }
    iMax = arr[0];
    for (i = 0; i < iLength; i++)
    {
        for (j = i; j < iLength; j++)
        {
            if (iMax < arr[j])
            {
                iMax = arr[j];
            }
        }
    }
    return iMax;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int Ret = 0;
    printf("enter the size of the array is:");
    scanf("%d", &iLength);
    brr = (int *)malloc(iLength * sizeof(int));
    if(brr==NULL)
    {
        printf("the memory not allowcated...");
        return -1;
    }
    Ret = display(brr, iLength);
    printf("largest element of the array is:%d", Ret);
    free(brr);
    return 0;
}
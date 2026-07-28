#include <stdio.h>
#include <stdlib.h>
int Eleven(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 11)
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
    printf("enter the size of the array is:");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    Ret = Eleven(brr, iLength);
    printf("Eleven Frequency:%d", Ret);
    free(brr);
    return 0;
}
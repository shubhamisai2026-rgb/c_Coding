#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 11)
        {
            return 1;
        }
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    printf("enter the size of the array is:");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    int Ret = display(brr, iLength);
    if (Ret == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }
    free(brr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

bool display(int arr[], int size, int no)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == no)
        {
            return 1;
        }
    }
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int no = 0;
    int Ret = FALSE;
    printf("enter the elements of the array is:");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("Enter the elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    printf("enter the number:");
    scanf("%d", &no);
    Ret = display(brr, iLength, no);
    if (Ret == TRUE)
    {
        printf("%d is present", no);
    }
    else
    {
        printf("%d is not a present", no);
    }
    free(brr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int display(int arr[], int size, int no)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == no)
        {
            count = i;
        }
    }
    return count;
}
int main()
{
    int *brr = NULL;
    int iLength = 0;
    int no = 0;
    printf("enter the size of the array is:\n");
    scanf("%d", &iLength);
    brr = malloc(iLength * sizeof(int));
    printf("elements of the array is:\n");
    for (int i = 0; i < iLength; i++)
    {
        scanf("%d", &brr[i]);
    }
    printf("enter the number:");
    scanf("%d", &no);
    int Ret = display(brr, iLength, no);
    printf("index of the number is:%d", Ret);
    free(brr);
    return 0;
}
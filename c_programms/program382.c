#include <stdio.h>
#include <stdlib.h>
int Division(int arr[], int size)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    return even - odd;
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
    int Ret = Division(brr, iLength);
    printf("difference frequency:%d", Ret);
    fee(brr);
    return 0;
}
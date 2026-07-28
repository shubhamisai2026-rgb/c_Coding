#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d", &arr[0]);
    return 0;
}
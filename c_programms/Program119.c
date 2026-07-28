#include <stdio.h>
 int arr[7];
int main()
{
   
    arr[0] = 12;
    arr[3] = 20;
    arr[6] = 30;
    printf("%d\n", sizeof(arr));
    printf("%d\n", arr[0]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[6]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[4]);
    return 0;
}
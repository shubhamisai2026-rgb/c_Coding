#include <stdio.h>
int main()
{
    int brr[5] = {10, 20, 30, 40, 50};
    display(brr);
    return 0;
}
void display(int arr[])
{
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d", arr[4]);
}
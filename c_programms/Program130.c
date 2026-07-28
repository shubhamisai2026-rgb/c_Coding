#include<stdio.h>
int main()
{
  int Brr[5]={10,20,30,40,50};
  display(Brr);
  return 0;
}
void display(int Arr[])
{
  printf("%d\n",*Arr);
  Arr++;
  printf("%d\n",*Arr);
  Arr++;
  printf("%d\n",*Arr);
  Arr++;
  printf("%d\n",*Arr);
  Arr++;
  printf("%d\n",*Arr);
  Arr++;

}
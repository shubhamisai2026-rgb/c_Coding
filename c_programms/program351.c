//1=0.093
#include<stdio.h>
float display(float num)
{
   float result=0;
   result=num*0.093;
   return result; 
}
int main()
{
    float num=0;float ret=0;
    printf("enter a number:");
    scanf("%f",&num);
    ret=display(num);
    printf("%f",ret);
    return 0;
}
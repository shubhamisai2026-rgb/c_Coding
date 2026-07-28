#include<stdio.h>
void convert(char iNo)
{
 if((iNo>='a') &&(iNo<='z'))
 {
    printf("%c",iNo-32);
 }
  if((iNo>='A') &&(iNo<='Z'))
 {
    printf("%c",iNo-32);
 }
}
int main()
{
char iValue='\0';
printf("enter a your character:");
scanf("%c",&iValue);
convert(iValue);
return 0;
}
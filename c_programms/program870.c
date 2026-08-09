#include<stdio.h>
int main()
{
    char str[80]={'\0'};
    char command[4][20]={{'\0'}};
    int iRet=0;

    printf("Marvellous CVFS:>");
    fgets(str,sizeof(str),stdin);
    
    iRet=sscanf(str,"%s %s %s %s",command[0],command[1],command[2],command[3]);
    printf("Number of tokens are:%d\n",iRet);
    return 0;
}
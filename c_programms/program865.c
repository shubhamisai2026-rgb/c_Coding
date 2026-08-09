#include<stdio.h>
int main()
{
    char str[80]={'\0'};

    char command1[20]={'\0'};
    char command2[20]={'\0'};
    char command3[20]={'\0'};

    printf("enter command:\n");
    fgets(str,sizeof(str),stdin);

    printf("entered command is:%s\n",str);
    
    sscanf(str,"%s %s %s",command1,command2,command3);

    printf("first token:%s\n",command1);
    printf("second command:%s\n",command2);
    printf("Third Token:%s\n",command3);

    return 0;
}
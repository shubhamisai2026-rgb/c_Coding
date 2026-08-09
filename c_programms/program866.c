#include<stdio.h>
int main()
{
    char str[80]={'\0'};

    // char command1[20]={'\0'};
    // char command2[20]={'\0'};
    // char command3[20]={'\0'};

    char command[4][20]={{'\0'}};

    printf("enter command:\n");
    fgets(str,sizeof(str),stdin);
    printf("entered command is:%s\n",str);

    sscanf(str,"%s %s %s",command[0],command[1],command[2]);

    printf("First token:%s\n",command[0]);
    printf("second token:%s\n",command[1]);
    printf("third command:%s\n",command[2]);

    return 0;
}
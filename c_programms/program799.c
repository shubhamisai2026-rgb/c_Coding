#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BUFFER_SIZE 1024

void display(char *fname)
{
    char Buffer[BUFFER_SIZE]={'\0'};
    int fd=0; int iRet=0;
    fd=open(fname,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file");
        return;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(1,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fd);
    
}

int main()
{
    char fname[30]={'\0'};
    printf("enter a file name:");
    scanf("%[^'\n']s",fname);
    display(fname);
    return 0;
}
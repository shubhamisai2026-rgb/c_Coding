#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    char Buffer[100]={'\0'};
    char fname[30]={'\0'};
    int fd=0;int iRet=0;
    printf("enter the file name:");
    scanf("%[^'\n']s",fname);
    fd=open(fname,O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the this file...");
        return -1;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
       write(1,Buffer,iRet);
       memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fd);
    return 0;
}
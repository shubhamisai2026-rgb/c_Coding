#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    char Buffer[100]={'\0'};
    int fd=0;
    fd=open("program792.c",O_RDONLY);
    while(read(fd,Buffer,sizeof(Buffer))!=NULL)
    {
      printf("%s",Buffer);
      memset(Buffer,'\0',sizeof(Buffer));
    }
    return 0;
}
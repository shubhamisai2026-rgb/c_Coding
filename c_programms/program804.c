#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#define BUFFER_SIZE 1024

void file_copy(char source_file[],char desination_file[])
{
    char Buffer[BUFFER_SIZE]={'\0'};
    int fdsrc=0;int fddest=0;
    int iRet=0;

    fdsrc=open(source_file,O_RDONLY);
    if(fdsrc==-1)
    {
        printf("unable to open to source file\n");
        return;
    }
    fddest=creat(desination_file,0777);

    if(fddest==-1)
    {
        printf("unable to create desination file\n");
        return;
    }
    while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))>0)
    {
        write(fddest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fdsrc);
    close(fddest);
}
int main()
{
    char source_file[30]={'\0'};
    char destination_file[30]={'\0'};

    printf("enter the source file name:\n");
     scanf("%[^\n]",source_file);


     printf("enter a destination file name:\n");
     scanf(" %[^\n]",destination_file);


     file_copy(source_file,destination_file);

     return 0;
}
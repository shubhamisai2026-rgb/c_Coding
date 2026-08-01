#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
    char fname[30]={'\0'};
    printf("enter a file name:");
    scanf("%[^'\n']s",fname);
    int iRet=display(fname);
    if(iRet==-1)
    {
        printf("unable to open the file....");
    }
    else
    {
        printf("size of the file is:%d",iRet);
    }

}
int display(char fname[])
{
    struct stat sobj;
    stat(fname,&sobj);
    return sobj.st_size;
}
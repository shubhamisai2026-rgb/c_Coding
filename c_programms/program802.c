#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

int main()
{
    char fname[30]={'\0'};
    printf("enter a file name:");
    scanf("%[^'\n']s",fname);
    display(fname);
    return 0;
}

void display(char *fname)
{
   struct stat sobj;
   stat(fname,&sobj);
   printf("file name %s",fname);
   printf("inode number:%lu",sobj.st_ino);
   printf("size of the file is:%d",sobj.st_size);

}
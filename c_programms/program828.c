#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd=0;
    int iRet=0;
    fd = open("file.txt",O_WRONLY | O_APPEND);

    if (fd == -1)
    {
        printf("File not created\n");
        return 1;
    }
    else
    {
    printf("File opened successfully. FD = %d\n", fd);

    iRet = write(fd, "jay ganesh... ", 14);
    printf("file size is %d bytes\n", iRet);

    close(fd);
    }
    return 0;
}
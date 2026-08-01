#include <stdio.h>
#include <fcntl.h>


int main()
{
    int fd;
    int iRet=0;
fd = open("demo.txt", O_WRONLY | O_APPEND);

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
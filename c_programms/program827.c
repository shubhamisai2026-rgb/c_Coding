#include <stdio.h>
#include <fcntl.h>


int main()
{
    int fd;

    fd = open("demo.txt", O_RDWR);

    if (fd == -1)
    {
        printf("File not created\n");
        return 1;
    }

    printf("File opened successfully. FD = %d\n", fd);

    write(fd, "jay ganesh... ", 14);

    close(fd);

    return 0;
}
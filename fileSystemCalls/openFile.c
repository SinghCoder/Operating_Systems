#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int main()
{
    int fd1, fd2;
    fd1 = open("./file1.txt",O_RDONLY);
    fd2 = open("./file1.txt",O_RDONLY);

    if(fd1 == -1 || fd2 == -1)
    {
        printf("Error opening files !!");
        exit(0);
    }
    else
    {
        printf("Opened successfully, Descriptors are = %d , %d", fd1, fd2);
    }
    return 0;
}
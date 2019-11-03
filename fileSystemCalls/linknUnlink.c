#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    link("./file1.txt", "files/file1.txt");
    link("./file1.txt", "files/morefiles/file1.txt");
    link("./file1.txt", "files/morefiles/file2.txt");

    int fd;

    if((fd = open("files/file1.txt",O_RDONLY)) < 0)
        return -1;

    char buffer[25];

    if((read(fd, buffer, 25)) < 0)
        return -1;
    
    printf("%s\n", buffer);
    unlink("files/morefiles/file2.txt");

    return 0;
}
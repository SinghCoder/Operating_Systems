#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    int fd = open("file1.txt", O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file..");
        exit(0);
    }
    int closeStatus = close(fd);
    if(closeStatus == -1)
    {
        printf("Unable to close file ..");
        exit(0);
    }
    printf("File closed successfully..");
    return 0;
}
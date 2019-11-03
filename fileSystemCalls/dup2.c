#include <fcntl.h>
#include <stdio.h>

int main()
{
    int file;

    if((file = open("file1.txt", O_WRONLY|O_APPEND)) < 0)
        return -1;

    printf("hi\n");
    // close(1);

    dup2(file,1);

    printf("I am being written through printf hmmm....");

    return 0;
}
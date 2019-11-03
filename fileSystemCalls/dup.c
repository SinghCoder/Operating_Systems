#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd1;
    if((fd1 = open("file1.txt", O_WRONLY | O_APPEND)) < 0)
        return -1;
    
    int fd2;
    if((fd2 = dup(fd1)) < 0)
        return -1;
    
    if(write(fd1, "I am written by actual file descrpitor..",40) <0)
        return -1;
    if(write(fd2, "I am written by dup(ped) file descrpitor..",42) <0)
        return -1;
    
    printf("Done.\n");

    return 0;
}
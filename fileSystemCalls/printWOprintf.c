#include <fcntl.h>
#include <stdio.h>
int main()
{
    int file;

    if((file = open("./file1.txt", O_RDWR)) < 0)
        return -1;
    
    char buffer[30];
    
    if(read(file, buffer, 30) < 0)
        return -1;
    
    if(write(1, buffer, 30) < 0)
        return -1;
    
    return 0;
}
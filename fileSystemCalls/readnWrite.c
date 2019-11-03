#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int file;
    
    if((file = open("file1.txt", O_RDWR | O_CREAT)) < 0)
        return -1;
    
    char data[45] = "Hey ya reader.. Hello Hope you are doing good";
    
    if(write(file, data, 50) < 0)
        return -1;

    // printf("end..");
    printf("lseek := %d\n",lseek(file,0,SEEK_CUR));

    if(lseek(file, -15, SEEK_CUR) < 0)
        return -1;
    
    if(read(file, data, 15) != 15)
        return -1;
    
    printf("%s\n",data);

    return 0;
}
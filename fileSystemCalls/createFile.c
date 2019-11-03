#include  <stdio.h>
#include  <fcntl.h>
int main()
{
    int fd1, fd2;
    fd1 = creat("file1.txt", 0777); //file1.txt with rwx permissions for all user, group, others
    fd2 = creat("file2.txt", 0777); 
    
    if(fd1 == -1 || fd2 == -1)
    {
        printf("Error creating files..");   
    }
    else
    {
        printf("Files created successfully and allocated file descriptors : %d and %d", fd1, fd2);
    }
    
    return 0;
}
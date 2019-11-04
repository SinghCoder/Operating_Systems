#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    printf("Hii\n");
    int pid = fork();
    printf("`````````````````Before fork()```````````````\n");
    system("ps");
    if(pid < 0) //error
    {
        perror("Fork failed..\n");
    }
    else if(pid == 0)    //Child part
    {
        printf("After fork()");
        printf("Hey ya I'm Child with pid = %ld\n", (long)getpid());
    }
    else
    {
        printf("Hey ya I'm Child with pid = %ld\n", (long)getpid());
    }
    
    return 0;
}
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t whichone, first, second;
    int howmany , status;

    if((first = fork()) == 0)
    {
        printf("First child, pid = %ld\n", (long)getpid());
        sleep(10);
        exit(0);
    }
    else if(first == -1)
    {
        perror("Fork failed..\n");
        exit(1);
    }
    else if((second = fork()) == 0)
    {
        printf("Second child, pid = %ld\n", (long)getpid());
        sleep(15);
        exit(1);
    }
    else if(second == -1)
    {
        perror("Second fork failed... \n");
        exit(1);
    }
    else 
        printf("This is parent\n");
    
    howmany = 0;
    while(howmany <2)
    {
        whichone = wait(&status);
        howmany++;

        if(whichone == first)
        {
            printf("First exited normally\n");
        }
        else
            printf("Second exited normally\n");
    }
    return 0;
}
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    printf("Before first forking\n");
    fork();
    printf("After first forking\n");
    fork();
    printf("After second forking\n");
    printf("Hi from parent pid = %ld", (long)getpid());
    return 0;
}
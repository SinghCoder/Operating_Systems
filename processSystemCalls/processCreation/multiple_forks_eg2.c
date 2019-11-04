#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    if(fork() || fork())
        fork();
    printf("hi\n");
    return 0;
}
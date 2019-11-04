#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    fork();
    fork();
    fork();
    printf("Hii\n");
    return 0;
}
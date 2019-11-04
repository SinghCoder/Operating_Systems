#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Hii\n");
    fork();
    printf("Bye\n");    //will be executed by both parent and child hence 2 times
    return 0;
}
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    long max;

    max = pathconf("/", _PC_PATH_MAX);

    char *buffer = (char*)malloc(sizeof(char)*max);

    if(getcwd(buffer,max) == NULL)
        return -1;
    
    printf("Path of cwd := %s\n", buffer);

    return 0;
}

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long max;
    max = pathconf("/", _PC_PATH_MAX);

    char *buffer = (char*)malloc(sizeof(char)*max);
    if(getcwd(buffer, max) == NULL)
    {
        printf("Error in getcwd()");
        exit(1);
    }

    printf("Current working directory := %s\n",buffer);

    if(chdir("/temp") != 0)
    {
        printf("Error in chdir() ");
        exit(1);
    }

    if(getcwd(buffer, max) == NULL)
    {
        printf("Error in getcwd()");
        exit(1);
    }

    printf("Current working directory := %s\n",buffer);
    return 0;
}
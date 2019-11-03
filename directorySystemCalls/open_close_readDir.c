#include <dirent.h>     //for dir* and dirent struct
#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    DIR* ds;
    if((ds = opendir(argv[1])) == NULL)
    {
        perror("Error in opening directory..");
        exit(1);
    }

    struct dirent* content;

    printf("Content of directory := \n");
    while( (content = readdir(ds)) != NULL )
    {
        printf("Inode : %d, Name : %s", content->d_ino, content->d_name);
    }

    if(closedir(ds) != 0)
    {
        perror("Error in closing directory..\n");
    }
    printf("All done succesfully!!\n");
    return 0;
}
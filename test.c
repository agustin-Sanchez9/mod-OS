#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(){

    int fd = open("abctest123.txt",O_WRONLY|O_CREAT|O_TRUNC, 0666);
    dup2(fd, STDOUT_FILENO);
    printf("esto deberia estar en txt\n");
    close(fd);
    printf("esto deberia estar en terminal\n");

    return 0;
}
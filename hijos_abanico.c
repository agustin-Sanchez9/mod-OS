#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>



int main(){
    int i;
    pid_t pid;
    for(i=0 ; i<3 && pid>0 ; i++){
        pid = fork();
        if(pid>0){
            wait(0);
        }
        if(pid==0){
            printf("padre:%i, soy:%i\n", getppid(),getpid());
            exit(0);
        }
    }
}
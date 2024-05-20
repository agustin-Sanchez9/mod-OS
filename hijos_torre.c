 

int i;
for(i=0 ; i<5 ; i++){
    pid_t pid = fork();
    if( pid>0 ) break;
}
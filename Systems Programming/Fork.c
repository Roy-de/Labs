#include <stdio.h>
#include <stdlib.h>

void forkprocess();

void forkprocess(){
    int id ;
    id = fork();
    if (id > 0){
        printf("Parent process: %d \n",getpid());
    }else if(id == 0){
        printf("child Process: %d \n",getpid());
        printf("Parent process: %d \n",getppid());
    }
}
int main(){
    forkprocess();
    return 0;
}
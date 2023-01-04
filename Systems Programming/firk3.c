#include <stdio.h>

int main(){
    fork();
    fork()&&fork()||fork();
    fork();
    printf("forked \n");
    return 0;
}
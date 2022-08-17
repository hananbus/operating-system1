#include "kernel/types.h"
#include "user/user.h"
#include "kernel/fcntl.h"


int main(int argc, char**argv){
    fprintf(2, "hey1\n");
    int pid = fork();

    pause_system(5);
   
    
    fprintf(2, "hey2\n");
    if(pid == 0){
        print_stats();
    }
    exit(0);
}

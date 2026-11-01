#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int main(){
    printf("Custom xv6 prog test! PID is %d\n",getpid());
    printf("Number of nonunused process is %d\n",getprocs());

}
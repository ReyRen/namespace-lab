#define _GNU_SOURCE
#include <sched.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define NOT_OK_EXIT(code, msg)  \
{                               \ 
    if(code == -1)              \
    {                           \
        perror(msg);exit(-1);   \
    }                           \
}                               \


int main(int argc, char *argv[])
{
    
}
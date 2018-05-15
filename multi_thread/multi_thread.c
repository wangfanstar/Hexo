#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    pid_t stPid;
    if (0 == fork())
    {
        printf("this is child process pid: %d\n",getpid());
    }
    else
    {
        wait(NULL);
        printf("this is parent process pid: %d\n",getpid());
    }
    return 0;
}

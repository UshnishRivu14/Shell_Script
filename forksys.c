#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(){

pid_t pid1, pid2;

pid1 = fork();
if(pid1==-1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if(pid1==0)
{
printf("The process of 1st child process is(PID %d)\n",getpid());
exit(EXIT_SUCCESS);
}

pid2=fork();
if(pid2==-1)
{
perror("fork");
exit(EXIT_FAILURE);
}
else if(pid2==0)
{
printf("The process ID of the 2nd process is (PID %d)\n",getpid());
exit(EXIT_SUCCESS);
}
printf("The process ID of parent process is (PID %d)\n",getpid());


return 0;
}

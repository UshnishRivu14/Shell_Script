#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

fork();
printf("The pid is: %d\n",getpid());


return 0;
}

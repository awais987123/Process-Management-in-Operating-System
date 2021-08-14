#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
Int main(void)
{
pid_t pid=fork();
If(pid==0) // controls move to child
{
printf("Child Process ID %d\n", getpid());
printf("Real user ID  %d\n", getuid());
printf("Effective Group ID %d\n", getegid());
return 0;
}
else if(pid>0) //controls move to parent 
{
printf("Process ID %d \n",getpid());
printf("Parent Process ID %d\n", getppid());
wait(NULL); // waiting child process to be finished
}
0
else
{
printf("Child Process is unable to create \n");
}
return 0;
}

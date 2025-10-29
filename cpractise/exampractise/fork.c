#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(void)
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		printf("i am child process\n");
		printf("child process id %d \n",getpid());
		printf("childs parent id %d\n",getppid());
	}
	else if(pid>0)
	{
		printf("i am parent process\n");
		printf("parents process id%d\n",getpid());
		printf("parents parent id %d\n",getppid());
	}
	return 0;
}


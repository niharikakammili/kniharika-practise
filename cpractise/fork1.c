#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>

int main()
{
	pid_t p=fork();
	while(1)
	{
		printf("hi,process id %d \n",getpid());
	}
}



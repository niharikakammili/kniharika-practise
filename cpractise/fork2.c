#include <stdio.h>
#include <unistd.h>
#include<sys/types.h>

int main()
{
        pid_t p=fork();
        while(1)
        {
		if(p==0)
                printf("child process id %d \n",getpid());
	else if(p>=1)
		printf("parent process pid %d\n",getpid());


        }
}


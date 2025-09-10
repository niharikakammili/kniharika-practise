#include<stdio.h>
#include<unistd.h>
int main()
{
	int i;
	FILE*f;
	for( i=0;i<4;i++)
	{
	fopen("sys/class/led/user/brightness","w");
	}
        if(i%2==0)
	{
		printf("led is on \n");
	}
	else
	{
		printf("led is off\n");
	}
	return 0;
}


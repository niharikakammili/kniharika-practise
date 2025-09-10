#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("file.txt","w");
	if(fptr==NULL)
	{
		printf("file is closed");
	}
	else
	{
		printf("file is created successfully");
	}
	return 0;
}


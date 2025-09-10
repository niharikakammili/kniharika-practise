#include<stdio.h>
int main()
{
	FILE* fptr;
	//file opened in read mode
	fptr=fopen("file.txt","r");
	if(fptr==NULL)
	{
		printf("file not opened");
	}
	return 0;
}


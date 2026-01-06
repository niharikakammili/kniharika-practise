#include<stdio.h>
int main()
{
	FILE*fp;
	char data[100];
	fp=fopen("sample.txt","w");  //create a file in write mode
	if(fp==NULL)
	{
		printf("file not created sucessfully\n");
		return 1;
	}
	printf("enter the data to write\n");
	fgets(data,sizeof(data),stdin);
	fputs(data,fp);
	fclose(fp);
	printf("file created sucessfully\n");
	return 0;
}


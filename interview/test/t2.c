#include<stdio.h>
int main()
{
	char str[100];
	int i=0,count=0;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("total number of characters %d",count);
	return 0;
}



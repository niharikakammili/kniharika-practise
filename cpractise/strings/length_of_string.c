#include<stdio.h>
#include<string.h>
int main()
{
	int str[100];
	int i=0;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);

	while(str[i]!='\0')
	{
		i++;
	}
	printf("the length of the string is %d",i);
	return 0;
}


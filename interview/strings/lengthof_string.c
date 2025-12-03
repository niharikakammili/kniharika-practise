#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0')
	{
		i++;
	}
	printf("lengh of the string %d",i);
	return 0;
}


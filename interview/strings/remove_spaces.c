#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0,j=0;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0')
	{
		if(str[i]!=' ' && str[i]!='\n')
		{
			str[j]=str[i];
			j++;
		}
		i++;
	}
	str[i]!='\0';
	printf("after removing spaces %s\n",str);
	return 0;
}


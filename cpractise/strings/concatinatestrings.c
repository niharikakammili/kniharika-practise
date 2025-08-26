#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str1[100],str2[100];
	printf("enter the first string \n");
	gets(str1);
	printf("enter the stringsecond \n");
	gets(str2);
	i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	j=0;
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	printf("concatinated string is %s",str1);
	return 0;
}


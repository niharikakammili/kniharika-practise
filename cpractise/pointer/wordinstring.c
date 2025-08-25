#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],word[100];
	printf("enter the string \n");
	fgets(str);
	printf("enter the word \n");
	scanf("%s",&word);
	if(strstr(str,word)!=NULL)//strstr()->it finds the first occurance of the substring in a string
	{
		printf("word is found %s",word);
	}
	else
	{
		printf("word not found %s",word);
	}
	return 0;
}


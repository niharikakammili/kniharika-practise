#include<stdio.h>
int main()
{
        char str[100],ch;
	int i=0,found=0;
	printf("enter the string \n");
	gets(str);
	printf("enter the character \n");
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{

			found=1;
			break;
		}
		i++;
	}
	if(found)
	{
		printf("character is found %c",ch);
	}
	else
	{
		printf("character is not found %c",ch);
	}
	return 0;
}


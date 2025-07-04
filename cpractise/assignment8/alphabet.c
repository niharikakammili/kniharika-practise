#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("character  is a alphabet");
	}
	else
	{
		printf("character is not a alphabet");
	}
	return 0;
}


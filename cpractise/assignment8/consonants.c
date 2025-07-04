#include<stdio.h>
int main()
{
	int ch;
	printf("enter the character \n");
	scanf("%d",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch='A')||(ch='E')||(ch='I')||(ch='O')||(ch='U'))
	{
		printf("the character is vowel%c\n ",ch);
	}
	else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("it is consonant %c \n",ch);
	}
	else
	{
		printf(" it is not a character %c \n",ch);
	}
	return 0;
}


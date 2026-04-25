#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int length=0,i=0,temp;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	while(str[length]!='\0')
	{
		length++;
	}
	while(i<length/2)
	{
		temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
		i++;
	}
	printf("after reverse the string %s",str);
	return 0;
}

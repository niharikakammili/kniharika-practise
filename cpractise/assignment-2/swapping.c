#include<stdio.h>
void main()
{
	int n;
	n=46;
	printf("Enter the values:");
	scanf("%d",&n);
	if(((n>>2)&1)!=((n>>4)&1))
	{
		n=n^((1<<2)|(1<<4));
	}
	printf("%d",n);
}


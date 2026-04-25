#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of a number %d",fact);
	return 0;
}


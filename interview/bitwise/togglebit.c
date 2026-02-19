#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position\n");
	scanf("%d",&p);
	n=n^(1<<p);
	printf("after the toggle the bit the number is%d",n);
	return 0;
}


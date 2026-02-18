#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position u want to reset\n");
	scanf("%d",&p);
	n=n&(~(1<<p));
	printf("after the reset the bit the num is %d",n);
	return 0;
}


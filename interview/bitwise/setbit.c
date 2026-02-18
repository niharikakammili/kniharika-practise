#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter the position you want to set\n");
	scanf("%d",&p);
	n=n|(1<<p);
	printf("after the set the number %d",n);
	return 0;
}


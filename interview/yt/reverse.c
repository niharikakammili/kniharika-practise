#include<stdio.h>
int main()
{
	int n,r,reverse=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	printf("after reverse the number %d",reverse);
	return 0;
}


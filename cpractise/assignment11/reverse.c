#include<stdio.h>
int main()
{
	int i,n,rev=0,s;
	printf("enter the number \n");
	scanf("%d",&n);
	while(n!=0)
	{
		s=n%10;
		rev=(rev*10)+s;
		n=n/10;
	}
	printf("the reverse of a number is %d \n",rev);
	return 0;
}


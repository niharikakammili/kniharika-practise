#include<stdio.h>
int main()
{
	int n,sum=0,first,last;
	printf("enter the number \n");
	scanf("%d",&n);
	last=n%10;
	first=n;
	while(first>=10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;
	printf("sum of first and last is %d",sum);
	return 0;
}



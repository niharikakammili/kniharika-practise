#include<stdio.h>
int main()
{
	int n;
	int ones=0,zeros=0;
	printf("enter the number\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n&1)
		{
			ones++;
		}
		else
		{
			zeros++;
			n>>1;
		}
		printf("ones %d",ones);
		printf("zeros %d",zeros);
		return 0;
	}
}


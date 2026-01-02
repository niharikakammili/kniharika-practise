#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the rows\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			if(i==1||j==n-i+1||i==n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j,k,o,n;
	printf("enter the no of rows \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(o=1;o<=i;o++)
		{
			printf("* ");
		}
		for(k=1;k<=n-i;k++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf(" \n");
	}

	return 0;
}



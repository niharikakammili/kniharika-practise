#include<stdio.h>
int main()
{
	int i,j,k,n,x;
	printf("enter the no of rows\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d",++x);
		}
		printf("\n");
	}
	return 0;
}


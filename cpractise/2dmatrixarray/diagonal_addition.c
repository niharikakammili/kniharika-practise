#include<stdio.h>
int main()
{
	int a[2][2],sum=0;
	int i,j;
	printf("enter the first matrix elements \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		sum+=a[i][i];
	printf("the sum of diagonals is%d",sum);
	}

	return 0;
}


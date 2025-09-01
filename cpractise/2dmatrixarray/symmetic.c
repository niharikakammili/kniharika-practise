#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j,symmetric=1;
	printf("enter the matrix elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				symmetric=0;
				break;
			}
		}
	}
	if(symmetric)
	{
		printf("the matrix is symmetric\n");
	}
	else
	{
		printf("the matrix not a symmetric\n");
	}
	return 0;
}


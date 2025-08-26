#include<stdio.h>
int main()
{
	int a[2][2],b[2][2];
	int i,j;
	int equal=1;
	printf("enter the first matrix elements \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the second matrix elements \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				equal=0;
			}
		}
	}
	if(equal)
	{
		printf("the matrices are equal \n");
	}
	else
	{
		printf("matrices are not equal \n");
	}
	return 0;
}

										

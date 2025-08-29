#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("enter the matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
			{
				a[i][j]=0;
			}
		}
	}
	printf("after finding lower traingular matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}


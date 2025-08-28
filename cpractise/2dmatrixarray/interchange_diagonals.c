#include<stdio.h>
int main()
{
	int a[2][2];
	int temp,i,j;
	printf("enter the elements of the matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	temp=a[0][0];
	a[0][0]=a[1][1];
	a[1][1]=temp;
	printf("after changing the diagonals of a matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i,j,k,size;
	printf("enter the size \n");
	scanf("%d",&size);
	for(i=1;i<=size;i++)
	{
		//k=size;
		for(j=1;j<=size;j++)
		{
			if(j>=1 && j<=size-i)
			{
				printf("  ");
				//k--;
			}
			else
			{
				printf(" *");
				//k--;
			}
		}
		printf("\n");
	}
	return 0;
}


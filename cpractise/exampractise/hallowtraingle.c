#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the size\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
				for(j=1;j<=i;j++)
				{
					if(j==1||i==n||i==j)
					{
						printf("* ");
					}
					else
					{
						printf("  ");
					}
				}
			}
		
	
	printf("\n");
	return 0;
}


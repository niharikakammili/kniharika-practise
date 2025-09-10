#include<stdio.h>
int main()
{
	int i,j,size;
	printf("enter the size \n");
	scanf("%d",&size);
	for(i=size;i>=0;i--)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=i && j<=8-i)
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

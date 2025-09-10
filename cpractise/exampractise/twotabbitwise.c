#include<stdio.h>
int main()
{

	int i,res,num;
	printf("three table \n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		res=(i<<1)+i;
	printf("three table is %d %d %d \n",num,i,res);
	}

	return 0;
}


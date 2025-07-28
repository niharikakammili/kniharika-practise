#include<stdio.h>
int main()
{

	int i,res,num;
	printf("the two table is \n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		res=(i<<1)+i;
	printf("two table is %d %d %d \n",num,i,res);
	}

	return 0;
}


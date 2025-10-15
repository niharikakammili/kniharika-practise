#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num&&(num&(num-1)))
	{
		printf("the number is power of two");
	}
	else
	{
		printf("not a power of two");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int p,num;
	printf("enter the number\n");
	scanf("%d",&num);
	printf("enter the position\n");
	scanf("%d",&p);
	if((1<<p)|num)
	{
		printf("the number is set\n");
	}
	else
	{
		printf("the number is not set\n");
	}
	return 0;
}



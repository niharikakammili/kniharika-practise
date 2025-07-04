#include<stdio.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	if((num%5==0) && (num%11==0))
	{
		printf(" the number is divisible by both\n");\
	}
	else
	{
		printf(" the number is not divisible by both\n");
	}
	return 0;
}


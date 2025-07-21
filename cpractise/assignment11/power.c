#include<stdio.h>
int main()
{
	int i,exponent,base;
	int result=1;
	printf("enter the base \n");
	scanf("%d",&base);
	printf("enter the exponent \n");
	scanf("%d",&exponent);
	for(i=0;i<exponent;i++)
	{
		result=result*base;
	}
	printf("the power of a number is %d \n",result);
	return 0;
}



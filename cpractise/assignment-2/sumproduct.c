#include<stdio.h>
void main()
{
	int num,sum,product,dig;
	printf("Enter the number:");
	scanf("%d",&num);
	sum=0;
	product=1;
	while(num>0)
	{
		dig=num%10;
		sum+=dig;
		product*=dig;
		num=num/10;
	}
	printf("sum of the digits is %d",sum);
	printf("product of the digits is %d",product);
}


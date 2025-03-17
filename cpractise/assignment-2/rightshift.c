#include<stdio.h>
int main()
{
	int num,result;
	printf("Enter the value:");
	scanf("%d",&num);
	result=num>>2;
	printf("result after right shift is:%d",result);
	return 0;
}


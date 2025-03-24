#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div;
	printf("enter the values:\n");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("addition of the numbers are:%d",add);
	printf("subtraction of the numbers are:%d",sub);
	printf("multiplication of the numbers are:%d",mul);
	printf("division of the numbers are:%d",div);
	return 0;
}


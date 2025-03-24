#include<stdio.h>
int main()
{
	int a,b,c;
	a=22;
	b=33;
	printf("print before swapping:\n");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping the numbers:%d %d",a,b);
	return 0;
}


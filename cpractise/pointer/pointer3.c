#include<stdio.h>
int main()
{
	int a=10;
	int*ptr=NULL;
	*ptr=&a;
	printf("%p %p",ptr,ptr+1);
	return 0;
}


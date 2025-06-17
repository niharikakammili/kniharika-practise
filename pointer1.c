#include<stdio.h>
int main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	printf(" before %d \n",a);
	*ptr=10;
	printf("after %d \n",a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a=5,b=6;
	int *ptr;
	ptr=&a,&b;
	printf("%d \n",*ptr);
	return 0;
}


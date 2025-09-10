#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	**pptr=&ptr;
	printf("%d \n",a);
	printf("%d \n",&a);
	printf("%d \n",ptr);
	printf("%d \n",&ptr);
	printf("%d \n",*ptr);
	printf("%d \n",pptr);
	printf("%d \n",*pptr);
	printf("%d \n",**pptr);
	return 0;
}


#include<stdio.h>
int main()
{
	int n1,n2,sum;
	int *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	printf("enter the two numbers \n:");
	scanf("%d %d ",ptr1,ptr2);
	sum=*ptr1+*ptr2;
	printf("%d",sum);
	return 0;
}


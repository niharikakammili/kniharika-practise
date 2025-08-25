#include<stdio.h>
int main()
{
	int n1,n2,temp;
	int *ptr1,*ptr2;
	ptr1=&n1;
	ptr2=&n2;
	printf("enter the two numbers \n");
	scanf("%d %d",ptr1,ptr2);
	printf("before swapping \n");
	printf("before swap p1 is %d \n",*ptr1);
	printf("before swap p2 is %d \n",*ptr2);
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("after swap p2 is %d \n",*ptr1);
	printf("after swap p2 is %d \n",*ptr2);
	return 0;
}


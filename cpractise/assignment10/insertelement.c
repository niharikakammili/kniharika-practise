#include<stdio.h>
int main()
{
	int arr[100]={0},n,i;
	printf("enter the size \n");
	scanf("%d",&n);
	printf("enter the index elements \n");
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the elements before insert  \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	arr[n]=50;
	for(i=0;i<n+1;i++)
	{
		printf("%d \n",arr[i]);
	}
	return 0;
}


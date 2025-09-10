#include<stdio.h>
int main()
{
	int arr[100];
	int i,temp,n;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("the number of elements %d \n");
	printf("print the index values \n");
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	printf("before right rotate elemnts \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("perform right rotation \n");
	temp=arr[n-1];
	for(i<n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	printf("after right rotation \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[100];
	int i,temp,n;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("print thenumber of elements %d \n",n);
	printf("print the index values \n");
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	printf("print the before rotate the elements \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("rotate the elemnts left\n");
	temp=arr[0];
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	printf("after left rotation \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}



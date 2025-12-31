#include<stdio.h>
int main()
{
	int arr[100],i,n;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}


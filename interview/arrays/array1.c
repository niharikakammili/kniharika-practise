#include<stdio.h>
int main()
{
	int arr[50],n,i;
	printf("enter the size \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array of elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


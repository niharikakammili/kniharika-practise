#include<stdio.h>
int main()
{
	int arr[100];
	int n,i;
	int *ptr=arr;
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the elements in the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	printf("enter the elemnts in the array\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",*ptr);
		ptr++;
	}
	return 0;
}


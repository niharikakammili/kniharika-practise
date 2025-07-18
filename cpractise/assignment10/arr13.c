#include<stdio.h>
int main()
{
	int arr[100];
	int n,i,max=0;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("the number of elements %d\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	printf("the elemnts in the array \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	printf("the maximum elements is %d \n",max);
	return 0;
}


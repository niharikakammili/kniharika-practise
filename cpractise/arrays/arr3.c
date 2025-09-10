#include<stdio.h>
int main()
{
	int arr[30],n,i,sum=0;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("print the index elemnts \n");
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the elemnts in the array \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("%d \n",sum);
	return 0;
}


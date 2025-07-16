#include<stdio.h>
int main()
{
	int arr1[30],arr2[40];
	int i,n;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("print the array elemnts \n");
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	printf("print the first array elemnts \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
	}
	printf("print the second array of elemnts \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr2[i]);
	}
	return 0;
}



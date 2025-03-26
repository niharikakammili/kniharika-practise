#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	printf("print elements of an array:\n");
	printf("---------------------------\n");
	printf("10 elements in the array:\n");
	for(i=0;i<10;i++)
	{
		printf("element-%d:",i);
		scanf("%dd",&arr[i]);
	}
	printf("elements in array are:");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}


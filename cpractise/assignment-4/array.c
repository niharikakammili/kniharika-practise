#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	printf("\n\nRead and print elements of an array:\n");
	printf("---------------------------------------\n");
	printf("input 10 elements in the array:\n");
	for(i=0;i<10;i++)
	{
		printf("element -%d:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n elements in array are:");
	for(i=0;i<10;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}

	

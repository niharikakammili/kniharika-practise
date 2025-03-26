#include<stdio.h>
int main()
{
	int i,n,a[100];
	printf("\n\nRead n number of variables in array and display it in reverse order:\n");
	printf("----------------------------------------------------------------------\n");
	printf("input the number of elements to store in the array:");
	scanf("%d",&n);
	printf("input %d number of elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("elements -%d:",i);
		scanf("%d",&a[i]);
	}
	printf("\n the values stored in the array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n\n the values stored in the array in reverse are:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%5d",a[i]);
	}
	printf("\n\n");
	return 0;
}


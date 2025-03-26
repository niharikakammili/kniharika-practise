#include<stdio.h>
int main()
{
	int a[100];
	int i,n,sum=0;
	printf("\n\n find the sum of all elements of array:\n");
	printf("------------------------------------------\n");
	printf("input the number of elements to be stored in the array:");
	scanf("%d",&n);
	printf("input %d elements in the array:\n",n);
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of all elements stored in the array is:%d\n\n",sum);
	return 0;
}


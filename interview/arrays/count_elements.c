#include<stdio.h>
int main()
{
	int arr[100],i,n,count=0;
	printf("enter the elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		count++;
	}
	printf("the no of elements count%d\n",count);
	return 0;
}


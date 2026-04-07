#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,i,temp;
	temp=arr[n-1];
	for(i=n-1;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	printf("after right rotating the elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


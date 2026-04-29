#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("even=%d",arr[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("odd %d",arr[i]);
		}
	}
	return 0;
}


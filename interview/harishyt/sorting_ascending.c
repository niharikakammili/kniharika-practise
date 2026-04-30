#include<stdio.h>
int main()
{
	int arr[]={4,5,3,1,2};
	int n=5,i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,k=2;
	int temp,i,j;
	k=k%n;
	for(i=0;i<k;i++)
	{
		temp=arr[0];
		{
			for(j=0;j<n-1;j++)
			{
				arr[j]=arr[j+1];
			}
			arr[n-1]=temp;
		}
	}
	printf("print the rotated elements after rotate\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,max,min;
	max=arr[0];
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}


	}
	printf("array is %d",max);
	return 0;
}


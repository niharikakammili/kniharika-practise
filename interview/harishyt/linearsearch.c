#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,i,found=0;
	int key=3;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			found=1;
			printf("%d",i);
		}
	}
	if(found==0)
	{
		printf("element not found\n");
	}
	return 0;
}


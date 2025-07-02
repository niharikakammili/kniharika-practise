#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int *p=arr;
	for(int i=0;i<4;i++)
	{
		printf("%d",*p);
		
	}
	return 0;
}


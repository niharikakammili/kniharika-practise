#include<stdio.h>
int main()
{

	int arr[]={1,2,3,4,5};
	int n=5;
	int i,value;
	printf("enter the value to insert\n");
	scanf("%d",&value);
	for(i=n;i>0;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=value;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


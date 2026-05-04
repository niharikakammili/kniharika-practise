#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	int i,val,pos;
	printf("enter the position\n");
	scanf("%d",&pos);
	printf("enter the number to insert\n");
	scanf("%d",&val);
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=val;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}



#include<stdio.h>
int main()
{
	int arr[]={1,2,3};
	int *p=arr;
	for(int i=0;i<3;i++)
	{

		printf("%d",*(p+i));//here p+i is nothing but arr[i]={123}
	}
	return 0;
}


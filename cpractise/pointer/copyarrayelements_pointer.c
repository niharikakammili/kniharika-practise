#include<stdio.h>
int main()
{
	int arr1[100],arr2[100];
	int i,n;
	int *ptr1,*ptr2;
	ptr1=&arr1;
	ptr2=&arr2;
	printf("enter the size \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

	printf("enter the first array elements\n");
	scanf("%d",(ptr1+i));
	}
	printf("enter the second array elements\n");
        
	for(i=0;i<n;i++)
	{
		*(ptr2+i)=*(ptr1+i);
	}
	ptr1=&arr1;
        ptr2=&arr2;

	for(i=0;i<n;i++)
	{
		printf("%d %d \t",*(ptr1+i),*(ptr2+i));
	}
	return 0;
}




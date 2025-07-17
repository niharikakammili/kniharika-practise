#include<stdio.h>
int main()
{
	int arr[100],i,n,temp ,j;
	printf("enter the number of elements \n");
        scanf("%d",&n);
	printf("print elements of array %d\n ", n);
	for(i=0;i<n;i++)
	{
		printf("%d",i);
		scanf("%d",&arr[i]);
	}
	//sorting an elemnts in ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("print the elements after sorting in ascending order \n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}


        

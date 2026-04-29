#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5,i,even=0,odd=0;

	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even count=%d",even);
	printf("odd count=%d",odd);
	return 0;
}



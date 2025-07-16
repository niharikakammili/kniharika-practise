#include<stdio.h>
int main()
{
        int arr[40],n,i,j,ctr=0,mm=1;
        printf("enter the number of elements \n");
        scanf("%d",&n);
        printf("elements of an array \n");
        for(i=0;i<n;i++)
        {
                printf("%d",i);
                scanf("%d",&arr[i]);
        }
        printf("to find the duplicate elemts \n");
        for(i=0;i<n;i++)
        {
                for(j=i+1;i<n;i++)
                {
                        if(arr[i]==arr[j])
                        {
                                ctr++;
				break;
                        }
                }
        }
        printf("the no of duplicate elements%d \n", ctr);
	return 0;
}


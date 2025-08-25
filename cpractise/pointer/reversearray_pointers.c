#include<stdio.h>
int main()
{
        int arr[100];
        int n,i;
        int *ptr=arr;
        printf("enter the size\n");
        scanf("%d",&n);
        printf("enter the elements in the array \n");
        for(i=0;i<n;i++)
        {
                scanf("%d",(ptr+i));
                
        }
        ptr=arr;
        printf("enter the elemnts in the array\n");
        for(i=n-1;i>=0;i--)
        {
                printf("%d,",(*ptr+i));
                
        }
        return 0;
}


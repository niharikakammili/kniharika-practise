#include<stdio.h>

int main()
{
    int arr[]={1,3,2,4,6};
    int n=5;
    int i, even=0, odd=0;

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

    printf("Array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEven count = %d", even);
    printf("\nOdd count = %d", odd);

    return 0;
}

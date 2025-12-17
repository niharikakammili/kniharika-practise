#include<stdio.h>

int main()
{
    int n, max, min, i;
    int arr[100];   

    printf("enter no of elements\n");
    scanf("%d", &n);  

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}


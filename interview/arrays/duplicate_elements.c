#include<stdio.h>

int main()
{
    int i, j, n;
    int arr[100];

    printf("enter the no of elements\n");
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

    printf("\nDuplicate elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])   
            {
                printf("%d ", arr[i]);
                break;   
            }
        }
    }

    return 0;
}


#include<stdio.h>

int main()
{
    int i, j, n,count;
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
                count++;
                break;
            }
        }
    }
    printf("no of duplicate elements\n %d",count);

    return 0;
}



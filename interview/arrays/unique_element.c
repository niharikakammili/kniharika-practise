#include <stdio.h>

int main()
{
    int i, j, n, count;
    int arr[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;  

        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("Unique element: %d\n", arr[i]);
        }
    }

    return 0;
}


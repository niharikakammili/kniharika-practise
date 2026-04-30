#include<stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 4;

    int low = 0, high = n - 1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found");
    return 0;
}

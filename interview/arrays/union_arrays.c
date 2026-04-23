#include<stdio.h>

int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    int n1 = 4, n2 = 4;
    int i, j, found;

    for(i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }

    for(i = 0; i < n2; i++)
    {
        found = 0;

        for(j = 0; j < n1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}

#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,3,3};
    int n = 5, i, j, count = 0;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    printf("Total duplicate occurrences = %d", count);
    return 0;
}

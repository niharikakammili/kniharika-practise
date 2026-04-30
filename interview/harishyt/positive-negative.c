#include<stdio.h>

int main()
{
    int arr[] = {1, -2, 3, -4, 5};
    int n = 5, i, pos = 0, neg = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
            pos++;
        else
            neg++;
    }

    printf("Positive count = %d\n", pos);
    printf("Negative count = %d\n", neg);

    return 0;
}

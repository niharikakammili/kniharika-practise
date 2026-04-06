#include<stdio.h>

int main()
{
    int arr[] = {2, -3, 5, -7, 0};
    int n = 5;
    int i, pos = 0, neg = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }
    }

    printf("Positive count = %d\n", pos);
    printf("Negative count = %d\n", neg);

    return 0;
}

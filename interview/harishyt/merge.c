#include<stdio.h>

int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int merge[100];
    int n1 = 4, n2 = 4;
    int i;
    for(i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }
    for(i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}

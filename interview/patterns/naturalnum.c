
#include<stdio.h>

int main()
{
    int i, j, k, n,x=0;

    printf("Enter the number of rows:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(k = 1; k <= n - i; k++)
        {
            printf("");
        }
        for(j = 1; j <= i; j++)
        {
            printf("%d ",++x );
        }

        printf("\n");
    }

    return 0;
}


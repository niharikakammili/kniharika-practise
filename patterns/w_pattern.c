#include <stdio.h>

int main()
{
    int i, j, n = 3;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (
                (i == 1 && (j == 1 || j == 5 || j == 9)) ||
                (i == 2 && (j == 2 || j == 4 || j == 6 || j == 8)) ||
                (i == 3 && (j == 3 || j == 7))
               )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Not a Power of 2\n");
        return 0;
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1)
        printf("It is a Power of 2\n");
    else
        printf("Not a Power of 2\n");

    return 0;
}

#include <stdio.h>

int main()
{
    int n, p;

    printf("Enter the number:\n");
    scanf("%d", &n);

    printf("Enter the position:\n");
    scanf("%d", &p);

    if ((n >> p) & 1)
    {
        printf("Bit is SET\n");
    }
    else
    {
        printf("Bit is RESET\n");
    }

    return 0;
}

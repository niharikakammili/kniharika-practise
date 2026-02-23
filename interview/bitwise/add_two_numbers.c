#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int carry = a & b;   // Step 1: find carry
        a = a ^ b;           // Step 2: add without carry
        b = carry << 1;      // Step 3: shift carry
    }

    printf("Sum = %d\n", a);

    return 0;
}

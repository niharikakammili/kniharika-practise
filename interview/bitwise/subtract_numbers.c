#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int borrow = (~a) & b;  // Find borrow
        a = a ^ b;              // Subtract without borrow
        b = borrow << 1;        // Shift borrow
    }

    printf("Result after subtraction: %d\n", a);

    return 0;
}

#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a - b;
    printf("Difference = %d\n", result);

    return 0;
}


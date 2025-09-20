#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong number.\n", originalNum);
    else
        printf("%d is not a Strong number.\n", originalNum);

    return 0;
}


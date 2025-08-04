#include <stdio.h>

int main() {
    int a[2][2], b[2][2], result[2][2];

    // Input for first matrix
    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    // Input for second matrix
    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    // Multiply matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output result
    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


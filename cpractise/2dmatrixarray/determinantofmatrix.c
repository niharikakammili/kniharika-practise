#include <stdio.h>

int main() {
    int a[2][2];
    int i, j, determinant;

    printf("Enter the elements of the 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate determinant: (a*d - b*c)
    determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

    printf("Determinant of the matrix is: %d\n", determinant);

    return 0;
}


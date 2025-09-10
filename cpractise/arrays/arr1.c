#include <stdio.h>

int main() {
    int arr[100], n, i;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("\nThe elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


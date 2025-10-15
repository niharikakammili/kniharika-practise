#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int i, index1 = 1, index2 = 3;  

    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    swap(&arr[index1], &arr[index2]);

    printf("after swapping elements  %d and %d: ", index1, index2);
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


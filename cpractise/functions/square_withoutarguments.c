#include <stdio.h>

int square() {
    int num = 7;
    return num * num;
}

int main() {
    int result = square();
    printf("Square is: %d\n", result);
    return 0;
}


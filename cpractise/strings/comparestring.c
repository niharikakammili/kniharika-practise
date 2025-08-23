#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("Strings are not equal.\n");
            return 0; // Exit early
        }
        i++;
    }

    printf("Both strings are equal.\n");
    return 0;
}


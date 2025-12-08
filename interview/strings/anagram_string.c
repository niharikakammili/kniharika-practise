#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i;
    long sum1 = 0, sum2 = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    if (strlen(str1) != strlen(str2)) {
        printf("Not an Anagram\n");
        return 0;
    }

    for (i = 0; str1[i]; i++)
        sum1 += str1[i];

    for (i = 0; str2[i]; i++)
        sum2 += str2[i];

    if (sum1 == sum2)
        printf("Strings may be Anagrams\n");
    else
        printf("Not an Anagram\n");

    return 0;
}


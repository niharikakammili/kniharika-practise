#include <stdio.h>
#include <string.h>
hello
int main() {
    FILE *f1, *f2;
    char file[50], line[256], newline[256];
    int ln, i = 1, found = 0;

    printf("File name: ");
    scanf("%s", file);
    printf("Line number to replace: ");
    scanf("%d", &ln);
    getchar(); 
    printf("New line: ");
    fgets(newline, sizeof(newline), stdin);
    newline[strcspn(newline, "\n")] = 0; 

    f1 = fopen(file, "r");
    if (!f1) {
        perror("Error opening file");
        return 1;
    }

    f2 = fopen("temp.txt", "w");
    if (!f2) {
        perror("Error creating temp file");
        fclose(f1);
        return 1;
    }

    while (fgets(line, sizeof(line), f1)) {
        if (i == ln) {
            fprintf(f2, "%s\n", newline);
            found = 1;
        } else {
            fputs(line, f2);
        }
        i++;
    }

    fclose(f1);
    fclose(f2);
    remove(file);
    rename("temp.txt", file);

    if (found)
        printf("Line %d replaced successfully.\n", ln);
    else
        printf("Warning: File has only %d lines. Nothing replaced.\n", i - 1);

    return 0;
}


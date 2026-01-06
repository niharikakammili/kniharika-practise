#include <stdio.h>

int main()
{
    FILE *fp;
    char data[100];
    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(data, sizeof(data), fp) != NULL)
    {
        printf("%s", data);
    }
    fclose(fp);

    return 0;
}


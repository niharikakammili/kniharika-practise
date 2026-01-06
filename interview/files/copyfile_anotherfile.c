#include <stdio.h>

int main()
{
    FILE *fs, *fd;
    char ch;

    fs = fopen("source.txt", "r");
    fd = fopen("destination.txt", "w");

    if (fs == NULL)
    {
        printf("Source file not found\n");
        return 1;
    }
    if (fd == NULL)
    {
        printf("Destination file cannot be created\n");
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully\n");
    return 0;
}


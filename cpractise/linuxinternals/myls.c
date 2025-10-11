#include <stdio.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
    DIR *d;
    struct dirent *dir;
    const char *path;

    if (argc < 2) {
        path = ".";  
    } else {
        path = argv[1];
    }

    d = opendir(path);

    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
        }
        closedir(d);
    } else {
        printf("Could not open directory: %s\n", path);
    }

    return 0;
}


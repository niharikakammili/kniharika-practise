#include <stdio.h>
#include <unistd.h>

int main() {
    fork();  

    printf("Hello from a process!\n");

    return 0;
}


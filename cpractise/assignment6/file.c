#include <stdio.h>

int main() {
    extern int x = 5;    
    static int x = 10;   
    printf("Auto variable x = %d\n", x);
    return 0;
}


#include <stdio.h>
extern int x=5;
int main() {   
    static int x = 10;  
    printf("Auto variable x = %d\n", x);
    return 0;
}


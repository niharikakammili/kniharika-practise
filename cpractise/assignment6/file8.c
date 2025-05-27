#include <stdio.h>
int main() {
    extern int x=10;
    auto int x=5;
    printf("Auto variable x = %d\n", x);                                                                                        return 0;
}

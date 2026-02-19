#include <stdio.h>

int main()
{
    unsigned short n, result = 0;
    unsigned short a, b, c, d;

    printf("Enter the hexadecimal number: ");
    scanf("%hx", &n);

    a = n & 0x000F;
    b = n & 0x00F0;
    c = n & 0x0F00;
    d = n & 0xF000;

    result = ((a << 12) | (b << 4) | (c >> 4) | (d >> 12));

    printf("After nibble swap: %04hx\n", result);

    return 0;
}


#include <stdio.h>

int main()
{
    unsigned int n;
    int set = 0, reset = 0;

    printf("Enter the number: ");
    scanf("%u", &n);

    while (n > 0)
    {
        if (n & 1)
            set++;     
        else
            reset++;    

        n = n >> 1;     
    }

    printf("Set bits = %d\n", set);
    printf("Reset bits = %d\n", reset);

    return 0;
}

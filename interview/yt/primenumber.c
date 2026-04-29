#include<stdio.h>

int main()
{
    int n, i, flag = 0;

    printf("Enter the number:\n");
    scanf("%d", &n);

    if(n <= 1)
    {
        printf("Not a prime number\n");
        return 0;
    }

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("It is a prime number\n");
    else
        printf("Not a prime number\n");

    return 0;
}

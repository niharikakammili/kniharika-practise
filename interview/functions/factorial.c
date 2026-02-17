#include<stdio.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("For negative number factorial is not possible\n");
    }
    else
    {
        int result = factorial(n); 
        printf("Factorial of %d is %d\n", n, result);
    }

    return 0;
}


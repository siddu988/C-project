#include <stdio.h>

unsigned long long factorial(int n)
{
    int i;
    unsigned long long fact = 1;

    if (n < 0)
    {
        printf("Error! Factorial doesn't exist.\n");
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial = %llu\n", fact);

    return fact;
}

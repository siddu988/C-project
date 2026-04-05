#include <stdio.h>

int reverse(int n)
{
    int rev = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number = %d\n", rev);

    return rev;
}

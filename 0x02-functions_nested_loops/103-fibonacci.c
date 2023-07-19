#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/**
 * fib - looks for Fibonacci numbers
 * Return: 0 always
 */
void fib(void)
{
    int64_t a[50];
    int i;
    int64_t sum = 0;

    a[0] = 1;
    a[1] = 2;

    for (i = 2; i <= 49; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (i = 0; i < 50; i++)
    {
        if (a[i] % 2 == 0 && a[i] <= 4000000)
        {
            sum = sum + a[i];
        }
    }

    printf("%" PRId64 "\n", sum);
}

/**
 * main - executes code
 * Return: 0 always
 */
int main(void)
{
    fib();
    return 0;
}


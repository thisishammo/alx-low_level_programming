#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/**
 * fib - looks for Fibonacci numbers
 * Return: 0 always
 */
void fib(void)
{
	int64_t a[98];
	int i;
	int64_t sum = 0;

	a[0] = 1;
	a[1] = 2;
	for (i = 2; i <= 98; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		printf("%" PRId64 ", ", a[i]);
	}
}
/**
 * main - executes code
 * Return: 0 always
 */
int main(void)
{
	printf("1, 2, ");
	fib();
	return (0);
}


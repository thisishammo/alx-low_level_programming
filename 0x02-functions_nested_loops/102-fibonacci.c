#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
/**
* fib - looks for fibonacci numbers
* Return: 0 always
*/
void fib(void)
{
	int64_t a[50];
	int i;

	a[0] = 1;
	a[1] = 2;
	for (i = 2; i <= 49; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		if (i != 49)
		{
			printf("%" PRId64 ", ", a[i]);
		}
		else
		printf("%" PRId64 "\n", a[i]);
	}
}
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');
	fib();
	return (0);
}

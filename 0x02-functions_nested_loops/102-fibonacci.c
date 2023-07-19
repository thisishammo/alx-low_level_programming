#include<stdio.h>
#include<stdlib.h>
/**
* fib - looks for fibonacci numbers
* Return: 0 always
*/
void fib()
{
	int a[50];
	int i;

	a[0] = 1;
	a[1] = 2;
	for (i = 2; i <= 49; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		if (i != 49)
		{
			printf("%d, ", a[i]);
		}
		else
		printf("%d\n", a[i]);
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

#include<stdio.h>
#include<stdlib.h>
/**
* fib - looks for fibonacci numbers
* Return: 0 always
*/
void fib(void)
{
	long long int a[50];
	int i;
	long long int sum = 0;

	a[0] = 1;
	a[1] = 2;
	for (i = 2; i <= 49; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	for (i = 0; i < 50; i++)
	{
		if (((a[i]) % 2) == 0 && a[i] <= 4000000)
		{
			sum = sum + a[i];
		}
	}
	printf("%lld\n", sum);
}
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	fib();
	return (0);
}

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
		printf("%d, ", a[i]);
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

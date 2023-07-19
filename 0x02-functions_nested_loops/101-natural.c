#include<stdio.h>
#include<stdlib.h>
/**
* sum_mul - adds numbers which are multiples of 3 and 5
* @n: final value
* Return: 0 always
*/
int sum_mul(int n)
{
	int i, sum;

	if (n < 1024)
	{
		for (i = 0; i <= n; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
			{
				sum = sum + i;
			}
		}
		printf("%d", sum - 1);
	}
	return (0);
}
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	int ham;

	scanf("%d", &ham);
	sum_mul(ham);
	return (0);
}

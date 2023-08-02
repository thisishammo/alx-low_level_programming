#include"main.h"
/**
* is_prime_number - determines whether a number is a prime
* number
* @n: number to be determined
* Return: integer
*/
int search(int a, int b)
{
	if (a > 1)
	{
		if (a % b == 0)
		{
			return (0);
		}
		else
			search(a, b + 1);
	}
	else
		return (0);
}
int is_prime_number(int n)
{
	int i = search(n, 1);

	return (i);
}

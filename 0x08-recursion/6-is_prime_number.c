#include"main.h"
/**
 * search - searches for prime numbers
 * @m: number to be determined whether prime
 * @p: number
 * Return: 1 if prime 0 if not
 */
int search(int m, int p)
{
	if (p != m)
	{
		if ((m % p) != 0)
		{
			return (search(m, p + 1));
		}
		else
			return (0);
	}
	else
	{
		return (1);
	}
}
/**
* is_prime_number - determines whether a number is a prime
* number
* @n: number to be determined
* Return: integer
*/
int is_prime_number(int n)
{
	if (!(n > 1))
	{
		return (0);
	}
	else
	{
		return (search(n, 2));
	}
}

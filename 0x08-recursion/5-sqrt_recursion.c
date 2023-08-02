#include"main.h"
/**
* find - searches for square root
* @m: number to be square root
* @k: a number that is to be squared to get m
* Return: square root
*/
int find(int m, int k)
{
	int p = k * k;

	if (p == m)
	{
		return (k);
	}
	else
		if (k > m / 2)
		{
			return (-1);
		}
		else
			return find(m, k + 1);
}
/**
* _sqrt_recursion - finds square root
* @n: number to be square rooted
* Return: squareroot or -1 if it doesn't have an integer
* as squareroot
*/
int _sqrt_recursion(int n)
{
	int h = find(n, 1);

	if (n < 0)
	{
		return (-1);
	}
	else
		if (n == 0)
		{
			return (0);
		}
}

#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - sums numbers
 * @n: count of integers
 * Return: 0 if n is 0 else returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int s = 0;
		unsigned int i;

		va_list args;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			s += va_arg(args, int);
		}
		va_end(args);
		return (s);
	}
}

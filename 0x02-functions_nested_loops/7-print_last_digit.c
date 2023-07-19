#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	int last;
	if (a < 0)
	{
		last = a%10;
		last = (last-(2*last));
		_putchar((char)last + '0');
		return (last);
	} else
	last = a%10;
	_putchar((char)last + '0');
	return (last);
}

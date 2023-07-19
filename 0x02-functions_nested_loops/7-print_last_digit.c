#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @a: The number from which the last digit will be extracted and printed.
*
* Return: The last digit of 'a'.
*/
int print_last_digit(int a)
{
	int last;

	if (a < 0)
	{
	last = a % 10;
	last = (last - (2 * last));
	_putchar((char)last + '0');
	return (last);
	}
	last = a % 10;
	_putchar((char)last + '0');
	return (last);
}

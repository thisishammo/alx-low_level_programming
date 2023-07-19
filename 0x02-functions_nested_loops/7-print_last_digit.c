#include "main.h"
#include<unistd.h>

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
		write(1, &last, 1);
		return (last);
	} else
	last = a%10;
	write(1, &last, 1);
	return (last);
}

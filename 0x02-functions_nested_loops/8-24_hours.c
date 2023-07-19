#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int s, h;
	for (h = 0; s <= 23; s++)
	{
	for (s = 0; s <= 59; s++)
	{
		int fdh = h/10;
		int sdh = h%10;
		int fds = s/10;
		int sds = s%10;
		_putchar(fdh + '0');
		_putchar(sdh + '0');
		_putchar(':');
		_putchar(fds + '0');
		_putchar(sds + '0');
		_putchar('\n');
	}
	}
}

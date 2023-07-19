#include "main.h"

/**
* jack_bauer - plays the song
*
* Return: Always void
*/
void jack_bauer(void)
{
	int s, h;

	for (h = 0; h <= 23; h++)
	{
	for (s = 0; s <= 59; s++)
	{
		int fdh = h / 10;
		int sdh = h % 10;
		int fds = s / 10;
		int sds = s % 10;

		_putchar(fdh + '0');
		_putchar(sdh + '0');
		_putchar(':');
		_putchar(fds + '0');
		_putchar(sds + '0');
		_putchar('\n');
	}
	}
}

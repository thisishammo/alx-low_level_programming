#include "main.h"
/**
* times_table - prints the multiplication table
* Return: void
*/
void times_table(void)
{
	int i, h;

	for (i = 0; i < 10; i++)
	{
		for (h = 0; h < 10; h++)
		{
			int res = i * h;

			_putchar(res + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

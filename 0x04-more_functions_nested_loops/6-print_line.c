#include"main.h"
/**
* print_line - draws a line
* @n: dictates how long the line should be
* Return: void
*/
void print_line(int n)
{
	int h;

	if (n > 0)
	{
		for (h = n; h > 0; h--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

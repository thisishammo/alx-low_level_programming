#include"main.h"
/**
* print_diagonal - draws a diagonal
* @n: dictates how long the diagonal should be
*
* Return: void
*/
void print_diagonal(int n)
{
	int h, i;
	/*
	int spacing = n - 1;
	*/
	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (i = 1; i <= h; i++)
			{
				_putchar('\\');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	_putchar('\n');
}

#include"main.h"
/**
* print_square - draws a square
* @size: determines size of square
* Return: void
*/
void print_square(int size)
{
	int i, h;

	if (!(size <= 0))
	{
	for (i = 0; i < size; i++)
	{
		for (h = 0; h < size; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}

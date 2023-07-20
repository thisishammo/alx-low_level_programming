#include"main.h"
/**
* print_triangle - draws a triangle
* @size: determines size of triangle
*/
void print_triangle(int size)
{
	int i, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	for (i = 1; i <= size; i++)
	{
		for (h = size; h > i; h--)
		{
			_putchar(' ');
		}
		for (h = 1; h <= i; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
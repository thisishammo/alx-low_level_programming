#include "main.h"
#include<stdio.h>
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
			_putchar((i * h) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

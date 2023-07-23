#include"main.h"
#include<stdio.h>
/**
* print_rev - prints strings in reverse
* @s: string to be reversed
*
* Return: nothing
*/
void print_rev(char *s)
{
	int h;

	for (h = 0; h < 1000000; h++)
	{
		if ((*(s + h)) == '\0')
		{
			break;
		}
	}
	for (h = h; h > -1; h--)
	{
		_putchar(*(s + h));
	}
	_putchar('\n');
}

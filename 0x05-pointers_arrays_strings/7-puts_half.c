#include"main.h"
/**
* puts_half - prints the second half of the elements
* @str: string to be printed
* Return: nothing
*/
void puts_half(char *str)
{
	int h = 0;
	int k;

	while (*(str + h) != '\0')
	{
		h++;
	}
	if ((h % 2) == 0)
	{
	for (k = 0; k <= h; k++)
	{
		if (k > (h / 2) && (*(str + k) != '\0')))
		{
		_putchar(*(str + k));
		}
	}
	}
	else
	for (k = 0; k <= h; k++)
	{
		if (k > ((h - 1) / 2) && (*(str + k)) != '\0')
		{
			_putchar(*(str + k));
		}
	}
	_putchar('\n');
}

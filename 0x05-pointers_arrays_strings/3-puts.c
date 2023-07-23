#include"main.h"
/**
* _puts - prints a string
* @str: string to be output
*
* Return: nothing
*/
void _puts(char *str)
{
	int h, k;

	for (h = 0; h < 10000000; h++)
	{
		if ((*(str + h)) == '\0')
		{
			break;
		}
	}
	for (k = 0; k < h; k++)
	{
		_putchar(*(str + k));
	}
	_putchar('\n');
}

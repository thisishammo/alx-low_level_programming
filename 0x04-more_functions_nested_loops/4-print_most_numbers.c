#include"main.h"
/**
* print_most_numbers - prints 0 to 9 except 2 and 4
*
* Return: void
*/
void print_most_numbers(void)
{
	int h;

	for (h = 0; h < 10; h++)
	{
		if (h != 2 && h != 4)
		{
			_putchar(h + '0');
		}
	}
	_putchar('\n');
}

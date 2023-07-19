#include "main.h"
/**
* print_alphabet_x10 - pritns alphabets x10
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i, b;

	for (b = 0; b < 10; b++)
	{
	for (i = 97; i <= 122; i++)
	{
	char a = (char)i;

	_putchar(a);
	}
	_putchar('\n');
	}
}

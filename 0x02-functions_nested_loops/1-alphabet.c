#include "main.h"
/**
* main - check the code
* Return: Always 0.
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
    	char a = (char)i;

    	_putchar(a);
	}
    _putchar('\n');
}

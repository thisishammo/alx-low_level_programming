#include"main.h"
/**
* _puts_recursion - prints a string
* @s: string to be printed
* ReturnL: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}

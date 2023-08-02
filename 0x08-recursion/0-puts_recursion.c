#include"main.h"
#include<stdio.h>
/**
* _puts_recursion - prints a string
* @s: string to be printed
* ReturnL: nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
		printf("%c", *s);
		_puts_recursion(s + 1);
}

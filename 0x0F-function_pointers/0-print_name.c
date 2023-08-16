#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: name of function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *s))
{
	f(name);
}

#include"main.h"
/**
* str - prints every other character of a string
* @str: string to be printed
* Return: nothing
*/
void puts(char *str)
{
	int h;

	for (h = 0; *(str + h) != '\0'; h++)
	{
		if ((h % 2) == 0)
		{
			_putchar(*(str + h));
		}
	}
}

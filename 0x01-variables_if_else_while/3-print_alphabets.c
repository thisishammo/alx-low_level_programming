#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a to z
 * Return: 0 means success otherwise error
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		char as = char(i);

		putchar(as);
	}
	int b;

	for (b = 65; b <= 90; b++)
	{
		char bs = char(b);

		putchar(bs);
	}
	return (0);
}


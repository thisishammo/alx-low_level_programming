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
		putchar(i);
	}
	putchar(10);
	return (0);
}


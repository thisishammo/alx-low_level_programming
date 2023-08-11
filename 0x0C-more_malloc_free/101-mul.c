#include"main.h"
#include<stdlib.h>
/**
 * main - executes code
 * Return: 0 if successful
 */
int main(int argc, char *agrv[])
{
	long long unsigned int product = 1;
	long unsigned int i;
	for (i = 1; i <= argc; i++)
	{
		product *= (int)agrv[i];
	}
	_putchar(;
	return (0);
}

#include"main.h"
#include<stdlib.h>
/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: actual arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *c = (char *)malloc(1000 * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[i] != '\0'; j++)
		{
			c[i] = *av[i];
		}
	}
	return (c);
}

#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates an array of size size
 * @c: character to initialise it with
 * @size: size of array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ham = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ham == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ham[i] = c;
	}
	return (ham);
}

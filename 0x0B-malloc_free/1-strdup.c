#include"main.h"
#include<stdlib.h>
/**
 * _strdup - duplicates strings
 * @str: string to be duplicated
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i;
	char *dup = (char *)malloc(1 * sizeof(char));

	if (str != NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			*(dup + i) = *(str + i);
			dup = (char *)realloc(dup, (i + 2) * sizeof(char));
		}
		i++;
		*(dup + i) = '\0';
		return (dup);
	}
	else
		return (NULL);
}

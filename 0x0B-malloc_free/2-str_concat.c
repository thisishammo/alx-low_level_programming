#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to concatenated string
 */
int counter(char **string1, char **string2)
{
	int count = 0, p;
	for (p = 0; string1[p] != '\0'; p++)
	{
		count++;
	}
	for (p = 0; string2[p] != '\0'; p++)
	{
		count++;
	}
	return (count);
}
char *str_concat(char *s1, char *s2)
{
	int i, count = counter(*s1, *s2);
	char *dup = (char *)malloc(1 * sizeof(char));

	for (i = 0; i < count; i++)
	{
		if (s1 != NULL && s2 != NULL)
		{
			if (*(s1 + i) != '\0')
				{
					*(dup + i) = *(s1 + i);
					dup = (char *)realloc(dup, (i + 2) * sizeof(char));
				}
				else
					if (*(s2 + i) != '\0')
					{
						*(dup + i) = *(s2 + i);
						dup = (char *)realloc(dup, (i + 2) * sizeof(char));
					}
					else
						break;
		}
	}
	i++;
	dup = (char *)realloc(dup, i * sizeof(char));
	*(dup + i) = '\0';
	if (dup != NULL)
	{
		return (dup);
	}	
	return (NULL);
}

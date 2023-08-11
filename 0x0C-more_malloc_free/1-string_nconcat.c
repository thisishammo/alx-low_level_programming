#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatenates the first string to the first n bytes of the
 * second string
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes to be concatenated
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, p = 0, h = 0;
	char *cat;

	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		cat = (char *)calloc(i + n, sizeof(char));
		for (p = 0; p < (i + n); p++)
		{
			if (p < i)
			{
				cat[p] = s1[p];
			}
			else
			{
				cat[p] = s2[h];
				h++;
			}
		}
	}
	else
	{
		if (s1 == NULL)
		{
			cat = s2;
		}
		else
		{
			cat = s1;
		}
	}
	cat[p] = '\0';
	return (cat);
}

#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;

	if (s1 != NULL && s2 != NULL)
	{
		int count = 0, count1 = 0, h = 0;
		int i;

		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			count++;
		}
		for (i = 0; *(s2 + i) != '\0'; i++)
		{
			count1++;
		}
		cat = (char *)malloc((count + count1) * sizeof(char));
		for (i = 0; i < (count + count1); i++)
		{
			if (i <= count - 1)
			{
				cat[i] = s1[i];
			}
			else
			{
				cat[i] = s2[h];
				h++;
			}
		}
		cat[i] = '\0';
		if (cat == NULL)
		{
			return (NULL);
		}
		else
		{
			return (cat);
		}
	}
	else
	{
		if (s1 == NULL)
		{
			int count1 = 0, i = 0;
			for (i = 0; *(s2 + i) != '\0'; i++)
			{
				count1++;
			}
			cat = (char *)malloc(count1 * sizeof(char));
			for (i = 0; i < count1; i++)
			{
				cat[i] = s2[i];
			}
			cat[i] = '\0';
			if (cat == NULL)
			{
				return (NULL);
			}
			else
			{
				return (cat);
			}
		}
		else
		{
			if (s2 == NULL)
			{
				int count1 = 0, i = 0;
				for (i = 0; *(s1 + i) != '\0'; i++)
				{
					count1++;
				}
				cat = (char *)malloc(count1 * sizeof(char));
				for (i = 0; i < count1; i++)
				{
					cat[i] = s1[i];
				}
				cat[i] = '\0';
				if (cat == NULL)
				{
					return (NULL);
				}
				else
				{
					return (cat);
				}
			}
		}
	}
	return (NULL);
}

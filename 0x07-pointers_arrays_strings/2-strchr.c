#include"main.h"
#include<stdlib.h>
/**
* _strchr - locates a character in a string
* @s: string in which a character is to be looked for
* @c: character to be looked for
* Return: pointer to a character
*/
char *_strchr(char *s, char c)
{
	char *found = (char *)malloc(100);
	int swit = 0, i = 0, k, h = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			swit = 1;
			k = i;
			break;
		}
	}
	if (swit == 1)
	{
		for (k = k; *(s + k) != '\0'; k++)
		{
			found[h] = *(s + k);
			h++;
		}
	}
	found[h] = '\0';
	if (found != NULL)
	{
		return (found);
	}
		return (NULL);
}

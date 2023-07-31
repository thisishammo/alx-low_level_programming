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
	char *found = (char*)malloc(1000);
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
			*(s + k) = *(found + h);
			h++;
		}
	}
	return (found);
}

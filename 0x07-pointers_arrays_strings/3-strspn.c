#include"main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: full string
* @accept: bytes accepts only
* Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, h;

	for (i = 0; *(s + i) != ' '; i++)
	{
		for (h = 0; *(accept + h) != '\0'; h++)
		{
			if (*(s + i) == *(accept + h))
			{
				count++;
			}
		}
	}
	return (count);
}

#include"main.h"
#include<stdlib.h>
/**
* _strpbrk - searches a string
* @s: string in which the bytes will be searched from
* @accept: bytes to search for
* Return: pointer to segment of a string
*/
char *_strpbrk(char *s, char *accept)
{
	char *segment = (char *)malloc(1000);
	int i, h = 0, k, p = 0, swit = 2;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (swit == 2)
		{
			for (h = 0; *(accept + h) != '\0'; h++)
			{
				if (*(s + i) == *(accept + h))
				{
					swit = 1;
				}
			}
		}
		else
			break;
	}
	for (k = i; *(s + k) != '\0'; k++)
	{
		*(segment + p) = *(s + k);
		p++;
	}

	return (segment);
}

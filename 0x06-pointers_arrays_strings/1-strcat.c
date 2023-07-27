#include"main.h"
/**
* _strncat - concatenates two strings
* @dest: where the concatenated string will go
* @src: source of strings
* @n: the number of characters to copy from src
* Return: pointer to destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, h = 0;

	while (*dest)
	{
		h++;
		dest++;
	}
	i = 0;
	while (*src)
	{
		if (i != n)
		{
		*(dest + h) = *(src + i);
		h++;
		i++;
		src++;
		}
		else
			break;
	}
	h++;
	*(dest + h) = '\0';
	return (dest);
}

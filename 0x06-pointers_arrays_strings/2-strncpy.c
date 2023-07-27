#include"main.h"
/**
* _strncpy - copies a string from src to
* destination
* @dest: destination to where the string
* will be copied to
* @src: string to be copied
* @n: the number of characters to be copied
* Return: pointer to a string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		*(dest + h) = *(src + h);
	}
	h++;
	*(dest + h) = '\0';
	return (dest);
}

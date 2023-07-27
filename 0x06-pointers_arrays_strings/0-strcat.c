#include"main.h"
/**
* _strcat - concatenates two strings
* @dest: where the concatenated string will go
* @src: source of strings
* Return: pointer to destination
*/
char *_strcat(char *dest, char *src)
{
	int i, h = 0;

	while(*dest)
	{
		h++;
		dest++;
	}
	i = 0;
	while(*src)
	{
		h++;
		*(dest + h) = *(src + i);
		i++;
		src++;
	}
	return (dest);
}

#include"main.h"
/**
* _strcpy - copies a string to another
* @dest: destination to which it is being copied to
* @src: source
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int h;

	for (h = 0; h < 10000; h++)
	{
		if ((*(src + h)) != '\0')
		{
			continue;
		}
		*(dest + h) = *(src + h);
	}
	h++;
	*(dest + h) = '\0';
	return (dest);
}

#include"main.h"
/**
* _memcpy - copy data from one memory location to another
* @dest: destination
* @src: source
* @n: how many bytes to be copied from src
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

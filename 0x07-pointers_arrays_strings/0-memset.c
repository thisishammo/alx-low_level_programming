#include"main.h"
/**
* _memset - fills memory
* @s: pointer to memory that is to be filled
* @b: what to fill the pointer with
* @n: number of bytes
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		return (98);
	}
	else
	{
		return (p);
	}
}

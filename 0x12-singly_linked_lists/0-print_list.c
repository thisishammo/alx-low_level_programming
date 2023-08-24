#include<stdio.h>
#include"lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (null)\n", 0);
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (i);
}

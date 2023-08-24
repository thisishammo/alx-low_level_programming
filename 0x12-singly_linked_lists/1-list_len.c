#include<stdio.h>
#include"lists.h"
/**
 * list_len - counts all the elements of a list_t list
 * @h: list
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		if (h->next == NULL)
		{
			break;
		}
		else
		{
			h = h->next;
		}
	}
	return (i);
}

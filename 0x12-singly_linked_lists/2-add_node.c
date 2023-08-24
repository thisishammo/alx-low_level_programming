#include"lists.h"
#include<stdlib.h>
#include<string.h>
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
list_t *add_node(list_t **head, const char *str)
{
	list_t *d = (list_t *)malloc(sizeof(list_t));
	d->len = _strlen(str);
	d->str = strdup(str);
	d->next = *head;
	*head = d;
	return (d);
}

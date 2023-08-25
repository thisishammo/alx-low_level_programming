#include"lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * _strlen - determines the length of a string
 * @str: string to be determined
 * Return: string length
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds nodes at the end of a singly
 * linked list
 * @head: address of the head node
 * @str: string to be copied
 * Return: address of the new added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *d = (list_t *)malloc(sizeof(list_t)), *temp = *head;

	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		d->len = _strlen(str);
		d->next = NULL;
		d->str = strdup(str);
		if (*head == NULL)
		{
			*head = d;
			return (d);
		}
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = d;
		return (d);
	}
}

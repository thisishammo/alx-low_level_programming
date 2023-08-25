#include"lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * free_list - frees nodes
 * @head: address of the head node
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;
	if (head->next == NULL)
	{
	}
	else
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head->next);
			free(head);
			head = temp;
		}
		free(head);
	}
}

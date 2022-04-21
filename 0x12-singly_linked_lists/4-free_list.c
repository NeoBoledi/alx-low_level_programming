#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a linked list
 *
 * @head: list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

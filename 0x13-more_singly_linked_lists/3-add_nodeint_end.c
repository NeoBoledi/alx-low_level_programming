#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: reference to the head pointer
 * @n: new data
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	if (new_node != NULL)
	{
		new_node->n = n;

		new_node->next = NULL;

		last_node->next = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}

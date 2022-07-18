#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to end of listint_t list
 * @head: head of the linked list to print.
 * @n: node data to add to list
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = (malloc(sizeof(listint_t)));
	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;
		return (*head);
	}
	do {
		if (last->next == NULL)
		{
			last->next = new_node;
			new_node->next = NULL;
			new_node->n = n;
			return (*head);
		}
		last = last->next;
	} while (last);
	free(new_node);
	return (*head);
}

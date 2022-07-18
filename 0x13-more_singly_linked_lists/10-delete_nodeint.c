#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a data node at given index into LL
 * @head: pointer to the head of the list
 * @index: index to delete
 * Return: 1 on success -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete;
	unsigned int i;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (i = 0; temp != NULL; i++)
	{
		if (i + 1 == index)
			break;
		temp = temp->next;
	}
	delete = temp;
	if (i + 1 == index)
	{
		delete = temp->next;
		temp->next = temp->next->next;
		free(delete);
	}
	return (1);
}

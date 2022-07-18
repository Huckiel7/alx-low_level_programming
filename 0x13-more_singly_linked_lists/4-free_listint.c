#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees up a linked list
 * @head: head of list to free
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: head of the linked list to print.
 * Return: number of nodes printed
 */

size_t listint_len(const listint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		if (h->next != NULL)
			h = h->next;
		else
		{
			count++;
			break;
		}
	}
	return (count);
}

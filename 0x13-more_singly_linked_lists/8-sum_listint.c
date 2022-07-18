#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data in the list.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

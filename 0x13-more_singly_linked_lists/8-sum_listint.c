#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * sum_listint - Finds Sum of all data (n)
 *
 * @head: Pointer to a node
 *
 *
 * Return: void
 */

int sum_listint(listint_t *head)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}

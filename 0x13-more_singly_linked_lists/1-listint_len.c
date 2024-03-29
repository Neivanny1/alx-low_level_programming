#include "lists.h"
#include <stdio.h>

/*
 * listint_len - Return number of elements in linked listint_t list
 *
 * @h: Points to the head of the list
 *
 * Return the number of elemnts in list
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Nth node
 *
 * @head: pointer to head node
 *
 * @index: int
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int counter;

	if (head == NULL)
	{
		return (NULL);
	}
	counter = 0;

	while (head != NULL)
	{
		if (index == counter)
		{
			return (head);
		}
		counter++;
		head = head->next;
	}
	return (NULL);
}

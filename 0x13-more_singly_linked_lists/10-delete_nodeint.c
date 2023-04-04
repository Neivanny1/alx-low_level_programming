#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a singly linked list
 * @head: A pointer to a pointer to the head node of the linked list
 * @index: The index of the node that should be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *duplicator = *head;
	unsigned int node;

	if (duplicator == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(duplicator);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (duplicator->next == NULL)
			return (-1);

		duplicator = duplicator->next;
	}

	temp = duplicator->next;
	duplicator->next = temp->next;
	free(temp);
	return (1);
}


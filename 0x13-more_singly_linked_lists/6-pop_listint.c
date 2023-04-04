#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Remove node from top
 *
 *@head: pointer to head node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int counter = 0;
	listint_t *node_new = *head;

	if (node_new)
	{
		counter = node_new->n;
		*head = node_new->next;
	}
		free(node_new);
		return (counter);
}

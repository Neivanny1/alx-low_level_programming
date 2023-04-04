#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the-
 * end of a listint_t list.
 * @head: A pointer that points to the address of the
 *  head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Else - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_one, *node_last;

	node_one = malloc(sizeof(listint_t));
	if (node_one == NULL)
		return (NULL);

	node_one->n = n;
	node_one->next = NULL;

	if (*head == NULL)
		*head = node_one;

	else
	{
		node_last = *head;
		while (node_last->next != NULL)
			node_last = node_last->next;
		node_last->next = node_one;
	}

	return (*head);
}

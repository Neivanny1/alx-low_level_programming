#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *temp1 = NULL;

	if (temp == NULL)
	{
		return (NULL);

	}

	temp->n = n;

	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
		return (*head);

	}
	temp1 = *head;

	while (temp1->next != NULL)
	{
		temp1 = temp1->next;

	}
	temp1->next = temp;
	temp->next = NULL;

	return (*head);
}

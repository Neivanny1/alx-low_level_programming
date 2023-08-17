#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a list
 * @head: A pointer to the header of the list
 * @n: Element to be added
 * Return: The address of the new element. or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}

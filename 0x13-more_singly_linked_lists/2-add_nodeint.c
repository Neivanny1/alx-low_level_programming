#include "lists.h"
/*
 * add_nodeint - This function add new node at beginning
 *
 * @head: A pointer to head of listint_t list
 *
 * @n: interger thats held in the new node
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = (temp);

	return (*head);
}

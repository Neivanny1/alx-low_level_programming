#include "lists.h"
/**
 * print_dlistint - Function to print elements in linked list
 * @h: pointer to header of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		node_counter++;
	}
	return (node_counter);
}

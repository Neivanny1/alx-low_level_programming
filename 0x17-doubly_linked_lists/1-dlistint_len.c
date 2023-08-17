#include "lists.h"
/**
 * dlistint_len - Function to count elements in linked list
 * @h: pointer to header of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counts = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (0);
	tmp = h;

	while (tmp != NULL)
	{
		counts++;
		tmp = tmp->next;
	}
	return (counts);
}

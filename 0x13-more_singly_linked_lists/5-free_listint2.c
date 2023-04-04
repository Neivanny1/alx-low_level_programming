#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 **/
/**
 * free_listint2 - Frees a linked list of integers and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a linked list of integers.
 * @head: A pointer to the head of the list.
 **/
void free_listint(listint_t *head)
{
	listint_t *temp;

	for (; head != NULL; head = head->next)
	{
		temp = head;
		free(temp);
	}
}


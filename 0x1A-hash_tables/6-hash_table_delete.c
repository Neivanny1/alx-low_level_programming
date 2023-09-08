#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *temp;
	unsigned int i;

	if (ht == NULL)
		return;

	i = 0;
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL && head->next == NULL)
		{
			free(head->key);
			free(head->value);
			free(head);
		}
		else if (head != NULL && head->next != NULL)
		{
			while (head != NULL)
			{
				temp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
			free(head);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"

/**
 * hash_table_set - adds element to the hash table
 * @ht: hash table to add/update key to
 * @key: key, cannot be empty
 * @value: value associated with key, can be empty
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node);
		return (0);
	}

	if (ht->array[index] == NULL)
		node->next = NULL;
	else
		node->next = ht->array[index];

	ht->array[index] = node;
	return (1);
}

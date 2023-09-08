#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	char *sep;
	unsigned int num_elements;
	unsigned int i;

	if (ht == NULL || ht->array == NULL)
		return;

	i = 0;
	num_elements = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			num_elements++;
		i++;
	}

	if (num_elements > 0)
		printf("{");

	i = 0;
	sep = "";
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s", sep);
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			sep = ", ";
		}
		i++;
	}

	if (num_elements > 0)
		printf("}");
	printf("\n");
}

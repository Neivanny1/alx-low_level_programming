#include "hash_tables.h"

/**
 * key_index - returns the index of the key
 * @key: returns the index of
 * @size: size of the array of the hash table
 * Return: index at which value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	index = index % size;

	return (index);
}

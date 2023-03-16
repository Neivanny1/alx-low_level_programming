#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, then _calloc returns NULL.
 *         If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* Check for zero inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set memory to zero */
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return ((void *)ptr);
}

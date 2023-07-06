#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at an index
 * @n: Points to the number to change
 * @index: index to set the bit
 *
 * Return: 1 for sucess and -1 for an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}

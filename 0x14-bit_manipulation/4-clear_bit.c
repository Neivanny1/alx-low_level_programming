#include "main.h"

/**
 * clear_bit - sets 0 to value of bit at given index
 * @n: Points to a number to modify
 * @index: position of bit to clear
 *
 * Return: 1 for success and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
       	unsigned long int bits;
	if (index >= sizeof(*n) * 8)
		return (-1);
	bits = ~(1 << index);

	*n &= bits;

	return (1);
}

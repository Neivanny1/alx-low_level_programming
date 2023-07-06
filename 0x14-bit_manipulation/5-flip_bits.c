#include "main.h"

/**
 * flip_bits  - returns bits required to flip from one number tp another
 * @n: number one
 * @m: number two
 *
 * Return: bits needed to flip numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}

	return (bits);

}

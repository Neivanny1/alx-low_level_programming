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
	int tracker = 0;
	unsigned long int checker = (n ^ m);

	while (checker != 0)
	{
		if (checker & 1)
			tracker ++;
		checker >>= 1;
	}
	return (tracker);
}

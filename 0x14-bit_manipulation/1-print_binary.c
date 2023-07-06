#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bits = 1;

	while ((bits << 1) <= n)
	{
		bits <<= 1;
	}
	while (bits != 0)
	{
		if (n & bits)
			_putchar('1');
		else
			_putchar('0');
		bits >>= 1;
	}
}

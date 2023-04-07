#include "main.h"

/**
 * get_bit - gets value of of bit a given index 
 * @n: the number of checks
 * @index: index of bit to get
 *
 * Return: value of bit at given index, or -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
	    return (-1);

    return ((n >> index) & 1);

}

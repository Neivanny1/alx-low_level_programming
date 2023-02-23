#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the larget prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;
	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for

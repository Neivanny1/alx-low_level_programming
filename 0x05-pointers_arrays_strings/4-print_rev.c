#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int reversa = 0;
	int num;

	while (*s != '\0')
	{
		reversa++;
		s++;
	}
	s--;
	for (num = reversa; num > 0; num--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

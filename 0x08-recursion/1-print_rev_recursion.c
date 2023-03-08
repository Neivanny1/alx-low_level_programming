#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* base case: end of string */
	{
		_print_rev_recursion(s + 1); /* recursive call with next character */
		_putchar(*s); /* print current character */
	}
}

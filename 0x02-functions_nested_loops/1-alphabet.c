#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - A program that prints alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z' ; start++)
	{
		putchar(start);
	}
	putchar('\n');
}

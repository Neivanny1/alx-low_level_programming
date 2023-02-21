#include <stdio.h>

/**
 * main - Program that prints _putchar
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		putchar(start);
	}
	putchar('\n');
}

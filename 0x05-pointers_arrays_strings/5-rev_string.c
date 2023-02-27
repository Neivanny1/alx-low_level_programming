#include "main.h"
/**
 * rev_string - reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	char eric = s[0];
	int run = 0;
	int i;

	while (s[run] != '\0')
		run++;
	for (i = 0; i < run; i++)
	{
		run--;
		eric = s[i];
		s[i] = s[run];
		s[run] = eric;
	}
}

#include "main.h"

/**
 * _strcat - concatenates two strings
 * @run: input value
 * @num: input value
 * Return: void
 */
char *_strcat(char *run, char *num)
{
	int i;
	int j;

	i = 0;
	while (run[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (num[j] != '\0')
	{
		run[i] = num[j];
		i++;
		j++;
	}

	run[i] = '\0';
	return (run);
}

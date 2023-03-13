#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *value;
	int i, rep = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	value = malloc(sizeof(char) * (i + 1));

	if (value == NULL)
		return (NULL);

	for (rep = 0; str[rep]; rep++)
		value[rep] = str[rep];
	return (value);
}

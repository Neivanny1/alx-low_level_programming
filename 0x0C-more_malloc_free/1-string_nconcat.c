#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the concatenated string.
 *         If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Compute the lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the beginning of the concatenated string */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	/* Concatenate the first n bytes of s2 to s1 */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* Terminate the concatenated string with a null byte */
	concat[i + j] = '\0';

	return (concat);
}


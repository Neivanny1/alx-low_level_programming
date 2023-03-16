#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints an error message and exits
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - multiplies two positive numbers represented as arrays of digits
 * @num1: the first number
 * @num2: the second number
 * @len1: the length of the first number
 * @len2: the length of the second number
 *
 * Return: a pointer to the result of the multiplication
 */
char *multiply(char *num1, char *num2, int len1, int len2)
{
	int i, j, k, carry, n;
	char *result;

	result = malloc(len1 + len2);
	if (result == NULL)
		return (NULL);

	/* initialize result */
	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	/* multiply each digit of num1 with each digit of num2 */
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n = (num1[i] - '0') * (num2[j] - '0') +
				(result[i + j + 1] - '0') + carry;
			result[i + j + 1] = (n % 10) + '0';
			carry = n / 10;
		}
		result[i] += carry;
	}

	/* remove leading zeroes */
	k = 0;
	while (k < len1 + len2 && result[k] == '0')
		k++;
	if (k == len1 + len2)
		k--;

	/* shift the result to the left */
	for (i = 0; i <= len1 + len2 - k; i++)
		result[i] = result[i + k];

	return (result);
}

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int len1, len2;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	len1 = 0;
	while (num1[len1])
	{
		if (!_isdigit(num1[len1]))
			print_error();
		len1++;
	}

	len2 = 0;
	while (num2[len2])
	{
		if (!_isdigit(num2[len2]))
			print_error();
		len2++;
	}

	result = multiply(num1, num2, len1, len2);
	if (result == NULL)
		print_error();

	printf("%s\n", result);

	free(result);

	return (0);
}

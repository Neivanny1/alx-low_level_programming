#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to get the factorial of
 *
 * Return: the factorial of the number, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* base case: error for negative numbers */
	{
		return (-1);
	}
	else if (n == 0) /* base case: factorial of 0 is 1 */
	{
		return (1);
	}
	else /* recursive case */
	{
		return (n * factorial(n - 1)); /* recursive call with n-1 */
	}
}

#include "main.h"
/**
 * is_prime - check if a number is prime
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
    if (n <= 1)
        return (0);
    if (i == 1)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime(n, i - 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n == 2)
        return (1);
    if (n < 2 || n % 2 == 0)
        return (0);
    return (is_prime(n, n / 2));
}

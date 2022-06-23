#include "main.h"

/**
 * is_prime - makes it possible to evaluate from 1 to n
 * @a: same as n
 * @b: iterates from 1 to n
 * Return: 1 on success, -1 on failure
 */

int is_prime(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
	return (is_prime(a, b + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 * Return: 1 if true else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

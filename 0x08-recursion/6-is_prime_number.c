#include "main.h"

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 * Return: 1 if true else 0
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
	return (0);
}

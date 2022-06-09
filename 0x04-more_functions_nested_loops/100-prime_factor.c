#include<stdio.h>
#include "main.h"

/**
 * main - prime factor
 *
 * Description: prime factor
 *
 * Return: always 0
 */

int main(void)
{
	printf("%ld\n", prime_factor());
	return (0);
}

/**
 * prime_factor - prime factor
 *
 * Description: largest prime factor
 *
 * Return: largest prime factor
 */

long prime_factor(void)
{
	long num = 612852475143;
	long currMaxPrime = -1;

	if (num % 2 == 0)
	{
		currMaxPrime = 2;
		while (num % 2 == 0)
			num = num / 2;
	}

	for (long i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			currMaxPrime = i;
			num = num / i;
		}
	}

	if (num > 2)
		currMaPrime = num;

	return (currMaxPrime);
}

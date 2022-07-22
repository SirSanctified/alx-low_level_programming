#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * flip_bits - return the number of bits needed to flip bits
 * @n: first number
 * @m: second number
 * Return: number of bits required for flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int diff;

	diff = n ^ m;
	
	for (count  0; diff != 0; count += 1)
		diff &= (diff - 1);
	return (count);
}

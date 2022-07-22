#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * clear_bit - clears bit at index
 * @n: pointer to number
 * @index: the index
 * Return: success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

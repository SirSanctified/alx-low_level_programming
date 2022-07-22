#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * get_bit - get the bit at index
 * @n: the number
 * @index: the index
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n&(1 << index)) ? 1 : 0);
}

#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * list_len - find length of a list
 * @h: head of a list
 * Return: number of nodes in a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

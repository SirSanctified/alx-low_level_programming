#include "lists.h"
#include<stddef.h>
#include<stdio.h>

/**
 * listint_len - find length of the list
 * @h: head of the list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}


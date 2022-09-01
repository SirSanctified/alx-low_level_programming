#include<stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: head pointer of the doubly linked list
 *
 * Description: print list elements
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}

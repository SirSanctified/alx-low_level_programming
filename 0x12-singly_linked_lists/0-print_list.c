#include "lists.h"
#include<stdio.h>

/**
 * print_list - print the contents of a list
 * @h: the head pointer of the list
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		
		h = h->next;
		count++;
	}
	return (count);
}

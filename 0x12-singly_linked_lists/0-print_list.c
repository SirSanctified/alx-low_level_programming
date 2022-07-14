#include "lists.h"
#include<stdio.h>

/**
 * print_list - print the contents of a list
 * @h: the head pointer of the list
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{

		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		
		temp = temp->next;
		count++;
	}
	return (count);
}

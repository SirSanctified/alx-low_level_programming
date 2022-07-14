#include "lists.h"
#include<stdio.h>

/**
 * print_list - print the contents of a list
 * @h: the head pointer of the list
 * Return: the size of the list
 */

size_t print_list(const list_t *h)
{
	list_t *temp = h;
	int count = 0;

	while (temp->next != NULL)
	{
		temp = temp->next;

		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
	}
	return (count);
}

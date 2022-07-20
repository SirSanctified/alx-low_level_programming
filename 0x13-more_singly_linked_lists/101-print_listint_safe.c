#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "lists.h"

/**
 * print_listint_safe -print the list elements
 * @head: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t nodes = 0;

	if (head == NULL)
		return (98);

	temp = head;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}

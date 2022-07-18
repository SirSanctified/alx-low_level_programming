#include<stdlib.h>
#include<stdio.h>
#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: head of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *h;

	h = *head;

	while (h != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	*head = NULL;
}

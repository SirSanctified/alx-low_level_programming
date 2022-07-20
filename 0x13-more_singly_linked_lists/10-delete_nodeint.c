#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete specified node
 * @head: list head
 * @index: the specified index
 * Return: one on success -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *pred;
	unsigned int count = 0;
	int deleted = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (count == index)
		{
			deleted = 1;
			break;
		}
		pred = temp;
		temp = temp->next;
	}
	if (deleted == 1)
	{
		pred->next = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}

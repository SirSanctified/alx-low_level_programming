#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node at specified index
 * @head: the head of the list
 * @index: the specified index
 * Return: the node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	int found = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			found = 1;
			break;
		}
		count++;
		temp = temp->next;
	}

	if (found == 1)
		return (temp);
	else
		return (NULL);
}

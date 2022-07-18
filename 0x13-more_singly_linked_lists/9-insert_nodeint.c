#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at gven index
 * @head: the head of the list
 * @idx: the specified index
 * @n: the data element
 * Return: address of the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *pred, *new;
	unsigned int count = 0;
	int valid = 0;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	while (temp->next != NULL)
	{

		if (idx == count)
		{
			valid = 1;
			break;
		}
		pred = temp;
		count++;
		temp = temp->next;
	}

	if (valid == 1)
	{
		new->next = temp;
		pred->next = new;
		return (new);
	}
	return (NULL);
}

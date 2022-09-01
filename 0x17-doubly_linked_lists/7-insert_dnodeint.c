#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific position
 * @h: pointer to list's first node
 * @idx: the position to insert the node
 * @n: the data to be inserted
 *
 * Description: insert node by index
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 0;
	dlistint_t *newnode, *temp = *h;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = newnode->prev = NULL;

	while (temp->next != NULL && idx != pos)
	{
		pos++;
		temp = temp->next;
	}
	if (pos == 0)
	{
		temp->prev = newnode;
		newnode->next = temp;
		*h = newnode;
	}
	else if (pos != idx)
	{
		newnode = NULL;
	}
	else if (temp->next == NULL && pos + 1 == idx)
	{
		temp->next = newnode;
		newnode->prev = temp;
	}
	else
	{
		newnode->prev = temp->prev;
		temp->prev->next = newnode;
		temp->prev = newnode;
		newnode->next = temp;
	}
	return (newnode);
}

#include "lists.h"

/**
 * add_dnodeint_end - add data at end of list
 * @head: head of list
 * @n: data to be added
 *
 * Description: add node at end
 * Return: address of new node if successiful else NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}


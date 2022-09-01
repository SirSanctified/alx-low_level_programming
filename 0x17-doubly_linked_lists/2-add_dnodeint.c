#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of the list
 * @head: head pointer to list
 * @n: data to be added
 *
 * Description: add node
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		newnode->next = *head;
		temp->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}

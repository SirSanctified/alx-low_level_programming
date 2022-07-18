#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a node at the beginning
 * @head: head of the list
 * @n: data element
 * Return: address of the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

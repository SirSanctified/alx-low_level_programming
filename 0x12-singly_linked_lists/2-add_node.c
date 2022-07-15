#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @head: pointer to the head of a list
 * @str: the string to add in a list
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->next = *head;
	*head = new;
	free(new->str);
	free(new);
	return (*head);
}


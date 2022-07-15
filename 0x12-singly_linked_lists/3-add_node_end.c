#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 * add_node_end -n add node at the end of a list
 * @head: the head of a list
 * @str: the string to be added in the new node
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	while (*head->next != NULL)
		*head = *head->next;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	*head->next = new;
	return (new);
}

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverse the linked list
 * @head: head of the list
 * Return: pointer to new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1, *var;

	temp = *head;
	var = NULL;

	while (temp != NULL)
	{
		temp1 = var;
		var = temp;
		temp = temp->next;
		var->next = temp1;
	}
	*head = var;
	return (var);
}

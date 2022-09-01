#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at specific position
 * @head: pointer to first node of the list
 * @index: the position to delete from
 *
 * Description: delete a node at the given index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int pos = 0;

	if (idx == 0 && *head != NULL)
	{
		*head = *head->next;
		*head->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}

	while (temp->next != NULL && pos != index)
	{
		pos++;
		temp = temp->next;
	}
	if (pos == index)
	{
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;
		temp->prev = temp->next = NULL;
		free(temp);
		return (1);
	}
	else if (pos == index && temp->next == NULL)
	{
		temp->prev->next = NULL;
		temp->prev = NULL;
		free(temp);
		return (1);
	}
	else
	{
		return (-1);
	}
}

#include "lists.h"

/**
 * free_dlistint - release the list
 * @head: list head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currNode;

	while (head != NULL)
	{
		currNode = head;
		head = head->next;
		free(currNode);
	}
}

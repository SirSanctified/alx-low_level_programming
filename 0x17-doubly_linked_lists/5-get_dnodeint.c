#include "lists.h"

/**
 * get_dnodeint_at_index - get node's data by index
 * @head: head of the list
 * @index: the index to get data at
 *
 * Description: get node data by index as in arrays
 * Return: the node at index 'index'
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *temp = head;

	while (temp != NULL && index != pos)
	{
		temp = temp->next;
		pos++;
	}
	return (temp);
}

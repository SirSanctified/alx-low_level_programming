#include "lists.h"

/**
 * sum_dlistint - sum the elements of a list
 * @head: the head of the list
 *
 * Description: sum list elements
 *Return: sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

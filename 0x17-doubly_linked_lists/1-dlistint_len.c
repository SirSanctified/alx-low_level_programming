#include "lists.h"

/**
 * dlistint_len - find length of a d list
 * @h: head pointer to list
 *
 * Description: find length of a list and return it
 * Return: lenth of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len += 1;
	}

	return (len);
}

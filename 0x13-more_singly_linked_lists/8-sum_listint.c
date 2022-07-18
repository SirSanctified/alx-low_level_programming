#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "lists.h"

/**
 * sum_listint - add up all data in list
 * @head: head of the list
 * Return: sum of all nodes
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}


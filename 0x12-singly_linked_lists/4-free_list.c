#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lists.h"

/**
 * free_list - release the list
 * @head: list head
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *currNode;

	while (head != NULL)
	{
		currNode = head;
		head = head->next;
		free(currNode->str);
		free(currNode);
	}
}

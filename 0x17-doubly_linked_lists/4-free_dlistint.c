#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - function that frees a node in doubly
 * linked list
 * @head: points to the head
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

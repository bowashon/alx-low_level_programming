#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that delete a node at index
 * in a doubly linked list
 * @head: points to the head
 * @index: index of the node to be deleted
 * Return: 1 if success or -1 if error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	current = *head;
	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
	}
	free(current);

	return (1);
}

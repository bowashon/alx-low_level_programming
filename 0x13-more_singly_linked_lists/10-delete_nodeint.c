#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the node at index of
 * of a listint_t linked list
 * @head: points to the head
 * @index: index at which node must be deleted
 * Return: return 1 if success or -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp, *prev = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; current != NULL && i < index ; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;

	free(current);

	return (1);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns node at index
 * @head: points to the head
 * @index: node position to return
 * Return: return the node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);

		current = current->next;
	}
	return (NULL);
}

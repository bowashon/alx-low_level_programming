#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - function that returns node at index
 * @head: points to the head
 * @index: index at which the node is to be retrieved
 * Return: return the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		perror("node does not exist\n");
		return (NULL);
	}

	return (current);
}

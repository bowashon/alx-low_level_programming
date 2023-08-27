#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function that insert node a
 * index of a doubly linked list
 * @h: points to the head node
 * @idx: index location
 * @n: data of the new node
 * Return: return address to the new node or NULL;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		if (*h != NULL)
			(*h)->prev = new_node;
		return (new_node);
	}
	current = *h;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}

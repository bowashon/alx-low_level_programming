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
	dlistint_t *current, *new_node = NULL;
	unsigned int i;

	new_node =  malloc (sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	current = *h;
	for (i = 0; i < idx && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->next = current->next;
	current->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}

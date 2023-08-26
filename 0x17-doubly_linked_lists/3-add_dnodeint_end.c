#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - function that adds new_node at the end of a doubly linked 
 * list
 * @head: points to the head node
 * @n: data of the new_node
 * Return: returns a pointer to the new node or NULL if otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current; 
	new_node->next = NULL;

	return (new_node);
}

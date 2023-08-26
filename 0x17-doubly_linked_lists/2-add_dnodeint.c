#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * doubly linke list
 * @head: points to the head node
 * @n: data of the new node
 * Return: return an address to the new node or NULL if otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

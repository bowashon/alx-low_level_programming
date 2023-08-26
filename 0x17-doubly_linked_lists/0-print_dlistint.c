#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - function that prints all elements of a doubly linked list
 * @h: points to the head node
 * Return: returns the number of nodes;
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	count = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}

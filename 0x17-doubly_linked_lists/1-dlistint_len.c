#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t
 * @h: points to the head node;
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	count = 0;
	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

#include "lists.h"
/**
 * print_listint - function that prints all elements
 * of a listing_t list.
 * @h: pointer to the head.
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{

		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}

#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: pointer to the element in the node (head)
 * Return: returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}

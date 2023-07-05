#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a listint
 * list
 * @head: pointer to the element in the node
 * @n: element in the node
 * Return: returns the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = (listint_t *)malloc(sizeof(listint_t *));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}

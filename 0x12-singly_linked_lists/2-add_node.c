#include "lists.h"
/**
 * add_node - function that adds a new node
 * @head: pointer head
 * @str: string parameter
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a_new_node;

	a_new_node = (list_t *)malloc(sizeof(list_t));

	if (a_new_node == NULL)
	{
		return (NULL);
	}

	a_new_node->str = strdup(str);
	
	a_new_node->len = strlen(str);

	a_new_node->next = *head;

	*head = a_new_node;

	return (*head);
}

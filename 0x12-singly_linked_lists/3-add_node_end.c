#include "lists.h"
/**
 * add_node_end - function that adds nodes to the end
 * @head: head pointer
 * @str: string
 * Return: return the address of the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nod;
	list_t *current;

	new_nod = (list_t *)malloc(sizeof(list_t));

	if (new_nod == NULL)
	{
		return (NULL);
	}

	new_nod->str = strdup(str);

	new_nod->len = strlen(str);
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_nod;
	}
	return (new_nod);
}

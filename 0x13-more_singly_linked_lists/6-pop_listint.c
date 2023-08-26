#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a lintint_t
 * linked list.
 * @head: pointer to the head node.
 * Return: returns the head node data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;

	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (data);
}

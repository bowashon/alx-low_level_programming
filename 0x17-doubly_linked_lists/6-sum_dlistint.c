#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function that returns the sum of all
 * data(n) of a dlistint_t linked list
 * @head: points to the head
 * Return: returns the sum of all data (n)
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

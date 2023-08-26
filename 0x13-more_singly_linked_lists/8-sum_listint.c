#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - fuction that sum 
 * @head: points to the head node
 * Return: returns the sum of all data of a listint_t linked list
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		
		current = current->next;
	}
	return (sum);
}

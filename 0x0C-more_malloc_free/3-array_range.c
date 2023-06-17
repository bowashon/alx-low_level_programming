#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an arrau of integers
 * @min: minimum parameter of elements
 * @max: maximum parameter of elements
 * Return: returns a pointer to tne array created
 *
 */
int *array_range(int min, int max)
{
	int *new;
	int value;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	new = malloc(((max - min) + 1) * sizeof(int));
	if (new == NULL)
	{
		return (NULL);
	}

	value = min;
	for (i = 0; i <= max; i++)
	{
		new[i] = value;
		value++;
	}
	return (new);
}



#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function as a parameter
 * on each element of an array
 * @array: array parameter given.
 * @size: size of the array
 * @action: is a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

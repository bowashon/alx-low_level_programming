#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index -function that searches for an integer
 * @array: pointer to an array
 * @size: size parameter of the array
 * @cmp: function pointer to a function
 * Return: returns the index of the first non zero element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}

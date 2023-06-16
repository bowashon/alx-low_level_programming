#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *new;

	new = malloc(b);

	if (new == NULL)
	{
		exit(98);
	}
	return (new);
}

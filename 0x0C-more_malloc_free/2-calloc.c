#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  function that allocate memory for an array, using malloc
 * @nmemb: number of element of the array
 * @size: size of the array
 * Return: returns a pointer to the allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	new = malloc(nmemb * size);

	if (new == NULL)
	{
		return (NULL);
	}
	memset(new, 0, nmemb * size);

	return (new);
}

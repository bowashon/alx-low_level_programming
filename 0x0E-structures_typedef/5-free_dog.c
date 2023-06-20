#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - function that frees allocated memory to struct dog
 *
 * @d: pointer to the struct
 *
 */
void free_dog(dog_ *d)
{
	if (d == NULL)
	{
		return (NULL);
	}

	free(d->name);
	free(d->owner);
	free(d);
}

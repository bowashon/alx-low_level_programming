#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function to print struct
 * @d: pointer to the struct variable
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	else if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

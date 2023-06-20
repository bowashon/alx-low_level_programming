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
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}

	printf("%.6f\n", d->age);

	if (d->owner == NULL)
	{
	printf("(nil)\n");
	}
	else
	{
	printf("%s\n", d->owner);
	}
}

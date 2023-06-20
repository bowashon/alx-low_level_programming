#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the name of the owner of the dog,
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	char len1 = strlen(name);
	char len2 = strlen(owner);

	if (d == NULL)
	{
		d = malloc(sizeof(struct dog);
	}

	(*d).name = malloc(len1 + 1);
	(*d).owner = malloc(len2 + 1);

	strcpy((*d).name, name);

	(*d).age = age;

	strcpy((*d).owner, owner);
}

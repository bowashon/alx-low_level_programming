#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - function that creates a new variable for the struct
 * new dog using typedef
 * @name: pointer parameter to the name of the dog
 * @age: age parameter of the dog
 * @owner: pointer parameter to the owner of the dog
 * Return: return a pointer to the allocated memory which contains
 * parameters of the struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;

	new_dog = malloc(sizeof(dog_t));


	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(strlen(owner) + 1);

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	return (new_dog);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: string parameter given
 * Return: return a pointer to the duplicate string on success,
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *new;
	size_t len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	new = malloc((len + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}

	strcpy(new, str);
	return (new);
}

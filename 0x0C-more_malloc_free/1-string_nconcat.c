#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function thst concatenate two string
 * @s1: destination string
 * @s2: source string
 * Return: returns a pointer to the concatenated string
 * @n: number of string characters to concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}

	new = malloc((len1 + n + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, s1);
	strcat(new, s2);

	new[len1 + n] = '\0';

	return (new);
}

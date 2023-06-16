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
	size_t total_len = (len1 + len2) + 1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	new = malloc(total_len * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	strcpy(new, s1);

	if (n < len2)
	{
		strncat(new, s2, n);
	}
	else
	{
		strcat(new, s2);
	}
	new[total_len - 1] = '\0';

	return (new);
}

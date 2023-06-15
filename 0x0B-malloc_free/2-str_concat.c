#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - function to concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: return a pointer to the pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	size_t len1;
	size_t len2;
	int i;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	i = len1 + len2;

	new = malloc((i + 1) * sizeof(char));
	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, s1);
	strcat(new, s2);
	new[i] = '\0';

	return (new);
}

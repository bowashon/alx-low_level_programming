#include "main.h"
#include <stddef.h>

/**
 * _strchr - function to locate a character in a string
 * @s: pointer to a string
 * @c: character to be checked
 * Return: return a pointer to the string else returns NULL
 */
char *_strchr(char *s, char c)
{


	while (*s)
	{
		if (*s == c)
		return (s);
		s++;
	}
	return (NULL);
}

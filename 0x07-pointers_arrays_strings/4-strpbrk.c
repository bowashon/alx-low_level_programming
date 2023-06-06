#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: parent file
 * @accept: file to check
 * Return: return a pointer to s or NULL if no se
 */
char *_strpbrk(char *s, char *accept)
{
	char match = 0;
	char *temp = accept;

	while (*s)
	{
		match = 0;

		while (*temp)
		{
			if (*s == *temp)
			{
				match = 1;
				return (s);
				}
		temp++;
		}

		if (!match)
		{
			return (NULL);
		}
	s++;
	}


#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: parent file
 * @accept: file to check
 * Return: return a pointer to s or NULL if no se
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		j++;
		}
		i++;
	}
	return (NULL);
}

#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer variabel parameter
 * Return: returns the length of a string
 *
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
